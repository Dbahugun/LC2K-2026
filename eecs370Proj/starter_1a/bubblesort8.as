	lw	0	5	one	r5 = 1
	lw	0	7	nmask	r7 = 0x7FFFFFFF (held permanently)
	lw	0	6	endadr	r6 = address of last element
outer	lw	0	1	arradr	r1 = ptr = address of arr[0]
inner	beq	1	6	idone	ptr == &arr[7] -> pass complete
	lw	1	2	0	r2 = x = mem[ptr]      (numeric offset 0)
	lw	1	3	1	r3 = y = mem[ptr+1]    (numeric offset 1)
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
fini	lw	0	2	arr	r2 = smallest (display checkpoint)
	lw	0	3	last	r3 = largest  (display checkpoint)
	halt
count	.fill	7	N-1 passes for N = 8
negone	.fill	-1
one	.fill	1
nmask	.fill	2147483647	0x7FFFFFFF
endadr	.fill	last	label operand
arradr	.fill	arr	label operand
arr	.fill	45
	.fill	-5
	.fill	12
	.fill	89
	.fill	3
	.fill	76
	.fill	-8
last	.fill	34