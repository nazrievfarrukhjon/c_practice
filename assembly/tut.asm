section .data

section .text
global _start

_start:
    MOV eax,1          ; syscall number for sys_exit
    mov ebx,1        ; exit code 0
    int 80h            ; invoke syscall