section .data
    format db "Hello, %s", 0x0A
    message db "Holberton", 0

section .text
    global _start

    extern printf

_start:
    push format
    push message
    call printf
    add esp, 8
    mov eax, 1
    xor ebx, ebx
    int 0x80
