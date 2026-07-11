	lw	0	4	nmask	r4 = 0x7FFFFFFF (complement of sign mask)
	lw	0	5	one	r5 = 1 (constant)
	add	0	0	1	r1 = 0 = F(0)  (prev)
	add	0	5	2	r2 = 1 = F(1)  (curr)
	add	0	5	6	r6 = 1 = n, index of curr
loop	add	1	2	3	r3 = F(n+1) = prev + curr
	nor	3	3	7	r7 = ~r3
	nor	7	4	7	r7 = r3 AND 0x80000000 (isolate sign bit)
	beq	7	0	cont	sign bit clear -> no overflow, keep going
	halt			overflow: F(n+1) wrapped negative, stop
cont	add	2	0	1	prev = curr
	add	3	0	2	curr = next
	add	6	5	6	n = n + 1
	beq	0	0	loop	unconditional loop
nmask	.fill	2147483647	0x7FFFFFFF
one	.fill	1
