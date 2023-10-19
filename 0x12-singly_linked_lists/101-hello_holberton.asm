/*             it's64-bit program in assembly                       */
/*     that prints Hello, Holberton, followed by a new line        */

section .data
	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0

section .text
	global main
	extern printf

main:
	push rbp

	mov rdi, fmt
	mov rsi, msg
	xor rax, rax  ; Clear RAX register before using it
	call printf

	pop rbp

	xor rax, rax  ; Clear RAX register before returning
	ret
