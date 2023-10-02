.global _start
.align 2

_start:                      
    b _my_print
    b _terminate

_my_print:                  
    mov X0, #1              
    adr X1, helloworld      
    mov X2, #12             
    mov X16, #4  
    svc 0         

_terminate: 
    mov X0, #0      
    mov X16, #1     
    svc 0          

helloworld: .ascii "hello world\n"