OUTPUT_ARCH(arm)
ENTRY(_reset_handler)

MEMORY
{
	vector : o = 0x20000000, l = 0x00000040
	rom    : o = 0x20000040, l = 0x000fffc0
	ram    : o = 0x20100000, l = 0x00100000
}

SECTIONS
{
	.vector :
	{
		___vector = . ; 
		*/vectors.o(.text)
		FILL(0xff)
		___vector_end = . ; 
	} > vector
	.text :
	{
		 ___text = . ; 
		*(.text)
		*(.strings)
		*(.rodata*)
		*(.glue*)
		 ___text_end = . ; 
	}  > rom
	.tors :
	{
		. = ALIGN(4);
		___ctors = . ;
		*(.ctors)
		___ctors_end = . ;
		___dtors = . ;
		*(.dtors)
		___dtors_end = . ;
	} > rom
	data : AT (ADDR(.tors) + SIZEOF(.tors))
	{
	    ___data_rom = ADDR(.tors) + SIZEOF(.tors);
		___data = . ;
		*(.data)
		___data_end = . ;
	} > ram
	.bss :
	{
		___bss = . ;
		*(.bss)
		*(COMMON)
		___bss_end = . ;  
	}  >ram
}

