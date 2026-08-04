    lw	0	5	one	r5 = 1
	lw	0	7	nmask	r7 = 0x7FFFFFFF (held permanently)
	lw	0	6	endadr	r6 = address of last element
outer	lw	0	1	arradr	r1 = ptr = address of arr[0]
inner	beq	1	6	idone	ptr == &arr[6] -> pass complete
	lw	1	2	0	r2 = x = mem[ptr]
	lw	1	3	1	r3 = y = mem[ptr+1]
	nor	2	2	4	r4 = ~x
	add	4	5	4	r4 = -x
	add	3	4	4	r4 = d = y - x
	nor	4	4	4	r4 = ~d
	nor	4	7	4	r4 = d AND 0x80000000
	beq	4	0	noswap	d >= 0 -> already in order (or equal)
	sw	1	3	0	mem[ptr]   = y
	sw	1	2	1	mem[ptr+1] = x
noswap	add	1	5	1	ptr++
	beq	0	0	inner
idone	lw	0	4	count	r4 = passes remaining
	lw	0	2	negone	r2 = -1
	add	4	2	4	passes--
	sw	0	4	count	write counter back to memory
	beq	4	0	fini
	beq	0	0	outer
fini	lw	0	1	arr	r1 = sorted[0] (smallest)
	lw	0	2	arr1	r2 = sorted[1]
	lw	0	3	arr2	r3 = sorted[2]
	lw	0	4	arr3	r4 = sorted[3]
	lw	0	5	arr4	r5 = sorted[4]
	lw	0	6	arr5	r6 = sorted[5]
	lw	0	7	last	r7 = sorted[6] (largest)
	halt
count	.fill	6	N-1 passes for N = 7
negone	.fill	-1
one	.fill	1
nmask	.fill	2147483647	0x7FFFFFFF
endadr	.fill	last	label operand
arradr	.fill	arr	label operand
arr	.fill	45
arr1	.fill	-5
arr2	.fill	12
arr3	.fill	89
arr4	.fill	3
arr5	.fill	76
last	.fill	-8