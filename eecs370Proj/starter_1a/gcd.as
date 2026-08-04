	lw	0	1	numa	r1 = a = 270
	lw	0	2	numb	r2 = b = 192
	lw	0	4	nmask	r4 = 0x7FFFFFFF
	lw	0	5	one	r5 = 1
	noop			executed once here, dynamically proves PC advances past a noop
loop	beq	1	2	done	gcd found when a == b
	lw	0	6	subadr	r6 = address of sub (reloaded every call)
	jalr	6	7	call sub: r3 = a - b, return addr in r7
	nor	3	3	7	r7 = ~d (r7 dead after return, reused as scratch)
	nor	7	4	7	r7 = d AND 0x80000000
	beq	7	0	apos	d positive -> a > b
	nor	3	3	3	r3 = ~d
	add	3	5	2	b = ~d + 1 = -(a-b) = b - a
	beq	0	0	loop
apos	add	3	0	1	a = d = a - b
	beq	0	0	loop
done	add	1	0	3	r3 = final GCD result
	halt
sub	nor	2	2	3	r3 = ~b
	add	3	5	3	r3 = -b
	add	1	3	3	r3 = a - b
	jalr	7	6	return (clobbers r6 with PC+1, reloaded next call)
numa	.fill	270
numb	.fill	192
nmask	.fill	2147483647	0x7FFFFFFF
one	.fill	1
subadr	.fill	sub	label operand: resolves to address of sub
