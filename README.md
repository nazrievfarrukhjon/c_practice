# c_practice
- my 'C' language practices

# VS Code commands
 - [shift+option+f]  to format code

 # Pointers work with addresses only
 - pointers literals are addresses only
 - &someVariable - by ampersant we get address of a var
 - method return type can be pointer int *lol(){} 
 - NULL is only for pointers
 - struct cannot be null. It already allocates data
 - struct node *temp; it is a pointer to a struct which means adress of a struct alocated memory





> ARDUINO UNO 
- brew install avr-gcc
- brew install avrdude
- ls /dev/cu.*  #for finding usb port on mac
- avr-gcc -mmcu=atmega328p -o your_program.elf your_program.c
- avr-objcopy -O ihex -R .eeprom your_program.elf your_program.hex
- avrdude -c arduino -p atmega328p -P /dev/ttyACM0 -b 115200 -U flash:w:your_program.hex
- (avrdude -c arduino -p atmega328p -P /dev/cu.usbserial-1130 -b 115200 -U flash:w:blink.hex)

> docker
- docker build -t my_assembly_image .
- docker run -it my_assembly_image bash
- docker exec -it {id} /bin/sh

> assembly
1) linux
- aarch64-linux-gnu-as -o my_file.o my_file.s
- aarch64-linux-gnu-ld -o my_file my_file.o
- ./lol

2) macm1 aarch64
hexdump hello.o
nasm 
xcrun -sdk macosx --show-sdk-path   # location of sys libraries
-l System -syslibroot               # linking system root
-e                                  # start point of assembly
as my_file.s -o my_file.o 
ld my_file.o -o my_file -l System -syslibroot `xcrun -sdk macosx --show-sdk-path` -e _start


-
> assembly x86 on mac
- nasm -f macho64 hello.asm
- ld -lSystem -syslibroot `xcrun -sdk macosx --show-sdk-path` -e _main hello.o

hello.asm


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

>64 intel
nasm -f elf64 salam.asm -o salam.o
ld salam.o -o salam
./salam

> x32 intel / COMPILATION/ compiling i386 / compiling x86 
- docker run -it c_practice-ubuntu:latest bash
- nasm -f elf32 lol.asm -o lol.o 
- ld -m elf_i386 lol.o -o lol
./lol
echo $?


> run docker
docker run -it -v "$(pwd)/assembly":/home/admin c_practice-ubuntu:latest bash


- note - docker containers for this project is not getting removed by gui so use cli
- `docker rm mycontainer`



> DOCKER multiple container on network
- docker network ls
- docker network inspect bridge
- docker network inspect crm_network
- add the nex to all docker composer yml files and add all containers to the crm_network
- `networks:
  crm_network:
  external:
  name: crm_network`


>
segment  .text
    global _start
_start:
    mov edx,len
    mov ecx,msg
    mov ebx,1
    mov eax,4
    int 0x80

    mov eax,1
    int 0x80

segment .data

msg db 'Hello, world!',0xa
len equ $ - msg
-----------------
Type the above code using a text editor and save it as hello.asm.
 Make sure that you are in the same directory as where you saved hello.asm.
 To assemble the program, type nasm -f elf hello.asm
 If there is any error, you will be prompted about that at this stage. Otherwise an object file of your program named hello.o will be created.
 To link the object file and create an executable file named hello, type ld -m elf_i386 -s -o hello hello.o
 Execute the program by typing ./hello
If you have done everything correctly, it will display Hello, world! on the screen.



- почему регистры делятся на дочерные правые и левые?

  -      -       -       -
 byte   byte    byte    byte    (EAX 4-bytes)
        
        
  -       -
 byte    byte (CX 2-bytes)

  -           
 byte (CH 1-byte)
 
  -
 byte(CL 1-byte)



 -In x86 assembly, the base pointer (ebp) is used to access parameters and local variables within a function. 



 > (NASM + Linux + i386) LEARN it first!!!