section .data
    ; No data section needed for this example

section .text
    global _start

_start:
    ; Load values into registers
    mov rax, 2     ; Move the value 2 into the RAX register
    add rax, 3     ; Add the value 3 to RAX

    ; The result (5) is now stored in the RAX register

    ; Exit the program
    mov rdi, rax   ; Move the result (5) into RDI (exit status)
    mov rax, 60    ; syscall number for sys_exit
    syscall        ; Make the system call to exit the program
