.global _main
.align 2

_main:
    mov X0, #1
    adr X1, message
    mov X2, #13
    mov X16, #4
    svc 0

    mov X0, #0
    mov X16, #1
    svc 0

message:
    .ascii "Hello, world!\n"
