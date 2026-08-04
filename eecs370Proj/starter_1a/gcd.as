	lw	0	1	numa	r1 = 270 (working copy — will mutate through the algorithm)
	lw	0	2	numb	r2 = 192 (working copy — will mutate through the algorithm)
	lw	0	4	nmask	r4 = 0x7FFFFFFF
	lw	0	5	one	r5 = 1
	noop			dynamically proves PC advances past a noop
loop	beq	1	2	done	gcd found when a == b
	lw	0	6	subadr	r6 = address of sub (reloaded every call)
	jalr	6	7	call sub: r3 = r1 - r2 (d), return addr in r7
	nor	2	2	7	r7 = ~r2
	add	7	5	7	r7 = ~r2 + 1 = -r2
	add	3	7	7	r7 = d + (-r2) = d - r2
	nor	7	7	7	r7 = ~(d - r2)
	nor	7	4	7	r7 = (d - r2) AND 0x80000000
	beq	7	0	noswap	sign bit clear -> d >= r2, no swap needed
	add	2	0	1	swap: r1 = old r2 (now the larger value)
	add	3	0	2	r2 = d (now the smaller value)
	beq	0	0	loop
noswap	add	3	0	1	r1 = d (still the larger value, no swap needed)
	beq	0	0	loop
done	add	1	0	3	r3 = final GCD result (captured before reload!)
	lw	0	1	numa	reload r1 = original 270, untouched in memory the whole time
	lw	0	2	numb	reload r2 = original 192, untouched in memory the whole time
	halt
sub	nor	2	2	3	r3 = ~b
	add	3	5	3	r3 = -b
	add	1	3	3	r3 = a + (-b) = a - b
	jalr	7	6	return (clobbers r6 with PC+1, reloaded next call)
numa	.fill	270
numb	.fill	192
nmask	.fill	2147483647	0x7FFFFFFF
one	.fill	1
subadr	.fill	sub	label operand