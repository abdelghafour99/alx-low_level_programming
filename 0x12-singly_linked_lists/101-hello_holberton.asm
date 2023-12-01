/*             it's64-bit program in assembly                       */
/*     that prints Hello, Holberton, followed by a new line        */

section .data
	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0

section .text
	global main
	extern printf

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
