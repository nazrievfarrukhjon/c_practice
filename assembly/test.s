.global _start
.align 2

_start:
STR LR, [SP, #-16]!
FMADD D0, D0, D1, D2
LDR LR, [SP], #16
RET