/*             it's64-bit program in assembly                       */
/*     that prints Hello, Holberton, followed by a new line        */


section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

section .rodata
	msg: db "Hello, Holberton", 10
	msglen: equ $ - msg
