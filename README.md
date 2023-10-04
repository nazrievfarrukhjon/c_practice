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

> x32 intel
- docker run -it c_practice-ubuntu:latest bash
- nasm -f elf32 lol.asm -o lol.o 
- ld -m elf_i386 lol.o -o lol
./lol
echo $?