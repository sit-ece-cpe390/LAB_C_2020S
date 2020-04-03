	.global _Z2a1j
	.global _Z2a2j

_Z2a1j:
	cmp	r0, #0
	ble	out1
	mov	r1, #0
x:	add	r1, #1
	cmp 	r1, r0
	blt	x
out1:	bx	lr

_Z2a2j:
	cmp	r0, #0
	ble	out2
y:	sub 	r0, #1
	cmp	r0, #0
	bgt	y
out2:	bx	lr
