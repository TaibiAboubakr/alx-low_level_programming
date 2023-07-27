section .data
    msg db 'Hello, Holberton', 0
    newline db 10, 0

section .text
    global main

main:

    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 16
    syscall

    mov rax, 1
    mov rdi, 1
    mov rsi, newline
    mov rdx, 1
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
