	.global _Z2a1j
	.global _Z2a2j

_Z2a1j:
	mov 	r1, #0
	sub	r0, #2
x:
	cmp	r1, r0
	add	r1, #1
	bne	x
	bx	lr

_Z2a2j:
	mov	r1, r0
y:
	sub	r1, #1
	cmp	r0, #0
	bne	y
	bx	lr
