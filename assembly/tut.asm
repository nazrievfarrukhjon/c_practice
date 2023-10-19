section .data
    hello db 'Hello, World!', 0xa  ; Newline character at the end

section .text
    global _start

_start:
    ; Write the message to stdout (file descriptor 1)
    mov eax, 4          ; syscall number for sys_write
    mov ebx, 1          ; file descriptor: stdout
    mov ecx, hello      ; pointer to the message
    mov edx, 14         ; message length
    int 0x80            ; invoke syscall

    ; Exit the program
    mov eax, 1          ; syscall number for sys_exit
    xor ebx, ebx        ; exit code 0
    int 0x80            ; invoke syscall
