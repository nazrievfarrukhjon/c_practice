global _start
section .data
    addr db "- yeeeeellow -"
section .text
_start:
    mov [addr], word '>'    ;
    mov [addr+11], word '<'   ;
    mov eax, 4              ;
    mov ebx, 1              ;
    mov ecx, addr           ;
    mov edx, 16              ;
    int 0x80                ;
    mov eax, 1              ;
    mov ebx, 0              ;
    int 0x80                ;