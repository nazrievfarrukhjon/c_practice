# `assembly`
> `x86`
- <u>General-Purpose Registers:</u>
- `eax` or `EAX` - ureturnu value for functions, Used for arithmetic and logic operations (accumulator)
- `ebx` or `EBX`(Base) - used as pointer to data especialy in the context of arrays
- `ecx` or `ECX` (counter) - primarly used as loop counter
- `edx` or `EDX` (Data) - Used in arithmetic operations, especially when the result is too large to fit in EAX.
- `ESI` (Source Index): Used as a source index for string operations.
- `EDI` (Destination Index): Used as a destination index for string operations.
- `EBP` (Base Pointer): Used as a base pointer for referencing the parameters and local variables of functions.
- `ESP` (Stack Pointer): Points to the top of the stack.

<u>Segment Registers:</u>
- `CS` (Code Segment): Points to the segment where the processor reads instructions.
- `DS` (Data Segment): Points to the segment where data is stored.
- `SS` (Stack Segment): Points to the segment of memory used for the stack.
- `ES` (Extra Segment): An additional data segment.
- `FS,GS`: Extra segment registers available in 32-bit mode (and some extended x86-64 modes).

<u>Instruction Pointer Register:</u>

- `EIP` (Instruction Pointer): Contains the offset of the next instruction to be executed.

<u>Flags Register:</u>
- `EFLAGS`: Contains various status flags, such as zero flag (ZF), carry flag (CF), overflow flag (OF), etc., which are modified after arithmetic and logical operations.

-
>


# `LIST OF CPU ARCHITECTURES`
- <u>`Embedded CPU architectures`</u>
- ARM's ARM Architecture
- Atmel's AVR architecture
- Microchip's PIC architecture
- Texas Instruments's MSP430 architecture
- Intel's 8051 architecture
- Zilog's Z80 architecture
- Western Design Center's 65816 architecture
- Hitachi's SuperH architecture
- Axis Communications' ETRAX CRIS architecture
- Power Architecture (formerly PowerPC)
- EnSilica's eSi-RISC architecture
- Milkymist architecture
- <u>`Microcomputer CPU architectures`</u>
- pre-x86
- x86
- Intel's IA-32 architecture, also called x86-32
- x86-64 with AMD's AMD64 and Intel's Intel 64 version of it
- Motorola's 6800 and 68000 architectures
- MOS Technology's 6502 architecture
- Zilog's Z80 architecture
- Power Architecture (formerly IBM POWER and PowerPC)
- The Advanced RISC Machines' (originally Acorn) ARM and StrongARM/XScale architectures
- Renesas RX CPU architecture - Combination of RISC and CISC architectures
- <u>`Workstation/Server CPU architectures`</u>
- DEC's Alpha architecture
- HP's PA-RISC architecture
- Power Architecture (formerly IBM POWER and PowerPC)
- Intel's Itanium architecture (formerly IA-64)
- MIPS Computer Systems Inc.'s MIPS architecture
- Sun Microsystems's SPARC architecture

-  <u>`Mini/Mainframe CPU architectures` </u>

- Burroughs large systems architecture (1961-present) currently supported in the Unisys ClearPath/MCP series.
- IBM's System/360, System/370, ESA/390 and z/Architecture (1964-present)
- DEC's PDP-11 architecture, and its successor, the VAX architecture
- UNIVAC 1100/2200 series architecture (currently supported by Unisys ClearPath IX computers)
- MIL-STD-1750A - the U.S.'s military standard computer
- AP-101 - the space shuttle's computer
- Mixed-core CPU architectures
- IBM's Cell architecture (a general purpose architecture that uses a POWER4 based core and 8 RISC based co-processors)
- CAS's Loongson 3
- Parallax Propeller, a 160 MIPS multicore microcontroller with eight 32-bit RISC cores.
- Historically important CPUs
- EDSAC - the first practical stored-program computer
- Apollo Guidance Computer, used in the moon flights
- MIL-STD-1750 An early CPU, standardized for military and aerospace embedded systems.
- MIPS R4000 - the first microprocessor to use a 64-bit datapath
- Central Air Data Computer - the first microprocessor

#
# `Types of Assembly language`

- RISC   (Reduced Instruction-Set Computer)
- DSP    (Digital Signal Processor)
- CISC: Complex Instruction Set Computer
- VLIW: Very Long Instruction Word

#
# `assembler`

- masm
- nasm
- gas

- `There are many object file formats. Some you should know about include`

- OMF: used in DOS but has 32-bit extensions for Windows. Old.
- AOUT: used in early Linux and BSD variants
- COFF: "Common object file format"
- Win, Win32: Microsoft’s version of COFF, not exactly the same! Replaces OMF.
- Win64: Microsoft’s format for Win64.
- ELF, ELF32: Used in modern 32-bit Linux and elsewhere
- ELF64: Used in 64-bit Linux and elsewhere
- macho32: NeXTstep/OpenStep/Rhapsody/Darwin/macOS 32-bit
- macho64: NeXTstep/OpenStep/Rhapsody/Darwin/macOS 64-bit


# `Linkers`
- Linkers - understands the object file formats you produce, and (2) can write executables for the operating systems you want to run code on
- `LINK.EXE`, for Microsoft operating systems.
- `ld`, which exists on all Unix systems; Windows programmers get this in any gcc distribution.

