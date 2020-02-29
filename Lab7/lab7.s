	.global _Z2a1j
	.global _Z2a2j

_Z2a1j:
	cmp	r0, #0
	ble	out1
	mov	r1, #0
x:	add	r1, #1
<<<<<<< HEAD
	cmp	r1, r0
=======
	cmp 	r1, r0
>>>>>>> 7b7d997d6ff65f0bfd4a159f48a5676d87141c3f
	blt	x
out1:	bx	lr

_Z2a2j:
	cmp	r0, #0
	ble	out2
<<<<<<< HEAD
y:	sub	r0, #1
=======
y:	sub 	r0, #1
>>>>>>> 7b7d997d6ff65f0bfd4a159f48a5676d87141c3f
	cmp	r0, #0
	bgt	y
out2:	bx	lr
