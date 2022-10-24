global	_start
	extern	printf


_start:
	mov	rdi, msg
	mov	rax, 0
	call	printf
	mov	rax, 0
	ret
msg:
	db "Hello, Holberton", 10, 0
