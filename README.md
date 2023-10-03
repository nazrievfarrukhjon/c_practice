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
xcrun -sdk macosx --show-sdk-path   # location of sys libraries
-l System -syslibroot               # linking system root
-e                                  # start point of assembly
as my_file.s -o my_file.o 
ld my_file.o -o my_file -l System -syslibroot `xcrun -sdk macosx --show-sdk-path` -e _start
