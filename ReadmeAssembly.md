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