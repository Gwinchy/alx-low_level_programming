section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global main

main:
    ; Call printf function
    mov rdi, format
    mov rsi, hello
    xor rax, rax    ; Clear RAX register (no floating-point args)
    call printf

    ; Exit the program
    mov rax, 60     ; syscall: exit
    xor rdi, rdi    ; status: 0
    syscall

