	section .data
	hello_msg db "Hello, Holberton", 0
	format db "%s", 0

	section .text
	global _start

_start:
	;;  Set up the arguments for printf
	mov rdi, format
	mov rsi, hello_msg
	xor rax, rax  	; Clear RAX to indicate no floating-point arguments (RAX=0)

	;;  Call printf
	call printf

	;;  Exit the program
	xor rdi, rdi
	call exit

	section .bss
	;;  Reserve some space for the printf function
	    resb 8
