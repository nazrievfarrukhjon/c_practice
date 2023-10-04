    global _start

    section .text

_start:
    mov ecx, 99     ; set ecx to 99
    mov ebx, 42     ; exit status is 42
    mov eax, 1      ; sys_exit system call
    cmp ecx, 999    ; compare ecx to 99
    jl skip         ; jump to skip if less than
    mov ebx, 13     ; exit status is 13
skip:
    int 0x80