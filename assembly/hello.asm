        global _main
        section .text

_main:
        mov     rax, 0x2000004 ; write
        mov     rdi, 1 ; stdout
        mov     rsi, str
        mov     rdx, str.len
        syscall

        mov     rax, 0x2000001 ; exit
        xor     rdi, rdi
        syscall

    section .data
str:    db      "holaaaa"
.len:   equ     $ - str