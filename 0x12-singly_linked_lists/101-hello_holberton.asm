section .data
    message db 'Hello, Holberton', 0xA ; 0xA is the ASCII code for a new line character

section .text
    global main

extern printf

main:
    sub rsp, 8 ; Align stack pointer

    mov edi, message ; Pass the address of the message string to printf
    xor eax, eax ; Clear EAX register
    call printf ; Call the printf function

    add rsp, 8 ; Restore stack pointer
    mov eax, 0 ; Return 0 from main
    ret
