/**
 * Project 1
 * Assembler code fragment for LC-2K
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

//Every LC2K file will contain less than 1000 lines of assembly.
#define MAXLINELENGTH 1000

int readAndParse(FILE *, char *, char *, char *, char *, char *);
static void checkForBlankLinesInCode(FILE *inFilePtr);
static inline int isNumber(char *);
static inline void printHexToFile(FILE *, int);
static int endsWith(char *, char *);

int
main(int argc, char **argv)
{
    char *inFileString, *outFileString;
    FILE *inFilePtr, *outFilePtr;
    char label[MAXLINELENGTH], opcode[MAXLINELENGTH], arg0[MAXLINELENGTH],
            arg1[MAXLINELENGTH], arg2[MAXLINELENGTH];
    char labels[65536][7];
    int labelVals[65536];
    int labelCount = 0;
    int lineNum = 0;
    if (argc != 3) {
        printf("error: usage: %s <assembly-code-file> <machine-code-file>\n",
            argv[0]);
        exit(1);
    }

    inFileString = argv[1];
    outFileString = argv[2];

    if (!endsWith(inFileString, ".as") &&
        !endsWith(inFileString, ".s") &&
        !endsWith(inFileString, ".lc2k")
    ) {
        printf("warning: assembly code file does not end with .as, .s, or .lc2k\n");
    }

    if (!endsWith(outFileString, ".mc")) {
        printf("error: machine code file must end with .mc\n");
        exit(1);
    }

    inFilePtr = fopen(inFileString, "r");
    if (inFilePtr == NULL) {
        printf("error in opening %s\n", inFileString);
        exit(1);
    }

    // Check for blank lines in the middle of the code.
    checkForBlankLinesInCode(inFilePtr);

    /*I think I need to start my work here
    Procedure:
        Assembler first pass:
        1. Open file and check for errors.
        2. Use readAndParse on each line in a while loop until we hit the end of the file, using isEmptyLine
        3. Use '/0' to figure out if there is a label or not
        4. Process the labels and use an array for line nums and array for storing the label names in order to map them out
        Assembler second pass:
        1. Use rewind to rewind the pointer
        2. readAndParse again, until we hit isEmptyLine
        3. Fill in labels so that I don't have to do the number labelling AND jumping by opcode, just jumping(Also dunno about this since its an assembler and not a simulator)
        4. Use strcmp on the different options in order to find the right opcode, and do necessary conversions
        5. Open and error check the opcode
        6. printToHex for each line. Use isNumber in order to encode the jumps correctly
        7. Done, check for correctness.
    */

    //Pass 1
    while(readAndParse(inFilePtr, label, opcode, arg0, arg1, arg2)){
        //Add label to array if it exists if arg2 doesn't have a number, 
        //Then in another array I can add the label line location so that I can replace it in the second pass
        if(label[0] != '\0'){
            strncpy(labels[labelCount], label, 6);
            labels[labelCount][6] = '\0';
            labelVals[labelCount] = lineNum;
            ++labelCount;
            ++lineNum;
        }
    }
    rewind(inFilePtr);
    outFilePtr = fopen(outFileString, "w");
    if (outFilePtr == NULL) {
        printf("error in opening %s\n", outFileString);
        exit(1);
    }

    //Pass 2
    lineNum = 0;
    int opcodeNum = 0;
    int errorFlag = 0;
    while(readAndParse(inFilePtr, label, opcode, arg0, arg1, arg2)){
        int labelFound = 0;
        int offset = 0;
        if(!strcmp(opcode, 'ADD')){
            opcodeNum = 0;
        }else if(!strcmp(opcode, 'NOR')){
            opcodeNum = 1;
        }else if(!strcmp(opcode, 'LW')){
            opcodeNum = 2;
        }
        else if(!strcmp(opcode, 'SW')){
            opcodeNum = 3;
        }
        else if(!strcmp(opcode, 'BEQ')){
            opcodeNum = 4;
        }else if(!strcmp(opcode, 'JALR')){
            opcodeNum = 5;
        }else if(!strcmp(opcode, 'NOOP')){
            opcodeNum = 6;
        }else if(!strcmp(opcode, 'HALT')){
            opcodeNum = 7;
        }else{
            //.fill accounting
            opcodeNum = 8;
        }
        if(arg0 < 0 || arg0 > 8 || arg1 < 0 || arg1 > 8){
            printf("Error: Register out of bounds");
            errorFlag = 1;
        }
        //process
        for(int i = 0; i < labelCount; ++i){
            if(labelVals[i] == lineNum){
                labelFound = 1;
            }
        }
        if(labelFound){
            for(int i = 0; i < labelCount; ++i){
                if(!strcmp(label, labels[labelCount]) && ((opcode == 2) || (opcode == 3))){
                    offset = labelVals[labelCount];
                }else if(!strcmp(label, labels[labelCount]) && opcode == 4){
                    offset = labelVals[labelCount] - 1;
                }else if(!strcmp(label, labels[labelCount]) && opcode == 8){
                    offset = labelVals[labelCount];
                }
            }
        }
        if((offset > 32767 || offset < -32768) && opcode != 8){
            printf("Error: Offset field out of range");
            errorFlag = 1;
        }else if(offset <= -2147483648 || offset >= 4294967295){
            printf("Error: Offset field out of range");
            errorFlag = 1;
        }
        //Left here 7/09/26, need to output now that labels have been parsed, case it by opcode
        lineNum++;
    }

    /* here is an example for how to use readAndParse to read a line from
        inFilePtr */
    if (! readAndParse(inFilePtr, label, opcode, arg0, arg1, arg2) ) {
        /* reached end of file */
    }

    /* this is how to rewind the file ptr so that you start reading from the
        beginning of the file */
    rewind(inFilePtr);

    /* after doing a readAndParse, you may want to do the following to test the
        opcode */
    if (!strcmp(opcode, "add")) {
        /* do whatever you need to do for opcode "add" */
    }

    /* here is an example of using isNumber. "5" is a number, so this will
       return true */
    if(isNumber("5")) {
        printf("It's a number\n");
    }

    /* here is an example of using printHexToFile. This will print a
       machine code word / number in the proper hex format to the output file */
    printHexToFile(outFilePtr, 123);

    return(0);
}

// Returns non-zero if the line contains only whitespace.
static int lineIsBlank(char *line) {
    char whitespace[4] = {'\t', '\n', '\r', ' '};
    int nonempty_line = 0;
    for(int line_idx=0; line_idx < strlen(line); ++line_idx) {
        int line_char_is_whitespace = 0;
        for(int whitespace_idx = 0; whitespace_idx < 4; ++ whitespace_idx) {
            if(line[line_idx] == whitespace[whitespace_idx]) {
                line_char_is_whitespace = 1;
                break;
            }
        }
        if(!line_char_is_whitespace) {
            nonempty_line = 1;
            break;
        }
    }
    return !nonempty_line;
}

// Exits 2 if file contains an empty line anywhere other than at the end of the file.
// Note calling this function rewinds inFilePtr.
static void checkForBlankLinesInCode(FILE *inFilePtr) {
    char line[MAXLINELENGTH];
    int blank_line_encountered = 0;
    int address_of_blank_line = 0;
    rewind(inFilePtr);

    for(int address = 0; fgets(line, MAXLINELENGTH, inFilePtr) != NULL; ++address) {
        // Check for line too long
        if (strlen(line) >= MAXLINELENGTH-1) {
            printf("error: line too long\n");
            exit(1);
        }

        // Check for blank line.
        if(lineIsBlank(line)) {
            if(!blank_line_encountered) {
                blank_line_encountered = 1;
                address_of_blank_line = address;
            }
        } else {
            if(blank_line_encountered) {
                printf("Invalid Assembly: Empty line at address %d\n", address_of_blank_line);
                exit(2);
            }
        }
    }
    rewind(inFilePtr);
}


/*
* NOTE: The code defined below is not to be modifed as it is implemented correctly.
*/

/*
 * Read and parse a line of the assembly-language file.  Fields are returned
 * in label, opcode, arg0, arg1, arg2 (these strings must have memory already
 * allocated to them).
 *
 * Return values:
 *     0 if reached end of file
 *     1 if all went well
 *
 * exit(1) if line is too long.
 */
int
readAndParse(FILE *inFilePtr, char *label, char *opcode, char *arg0,
    char *arg1, char *arg2)
{
    char line[MAXLINELENGTH];
    char *ptr = line;

    /* delete prior values */
    label[0] = opcode[0] = arg0[0] = arg1[0] = arg2[0] = '\0';

    /* read the line from the assembly-language file */
    if (fgets(line, MAXLINELENGTH, inFilePtr) == NULL) {
	/* reached end of file */
        return(0);
    }

    /* check for line too long */
    if (strlen(line) == MAXLINELENGTH-1) {
	printf("error: line too long\n");
	exit(1);
    }

    // Ignore blank lines at the end of the file.
    if(lineIsBlank(line)) {
        return 0;
    }

    /* is there a label? */
    ptr = line;
    if (sscanf(ptr, "%[^\t\n ]", label)) {
	/* successfully read label; advance pointer over the label */
        ptr += strlen(label);
    }

    /*
     * Parse the rest of the line.  Would be nice to have real regular
     * expressions, but scanf will suffice.
     */
    sscanf(ptr, "%*[\t\n\r ]%[^\t\n\r ]%*[\t\n\r ]%[^\t\n\r ]%*[\t\n\r ]%[^\t\n\r ]%*[\t\n\r ]%[^\t\n\r ]",
        opcode, arg0, arg1, arg2);

    return(1);
}

static inline int
isNumber(char *string)
{
    int num;
    char c;
    return((sscanf(string, "%d%c",&num, &c)) == 1);
}


// Prints a machine code word in the proper hex format to the file
static inline void 
printHexToFile(FILE *outFilePtr, int word) {
    fprintf(outFilePtr, "0x%08X\n", word);
}

// Returns 1 if string ends with substr, 0 otherwise
static int
endsWith(char *string, char *substr) {
    size_t stringLen = strlen(string);
    size_t substrLen = strlen(substr);
    if (stringLen < substrLen) {
        return 0; // string too short
    }
    char *stringEnd = string + stringLen - substrLen;
    if (strcmp(stringEnd, substr) == 0) {
        return 1;
    }
    return 0;
}
