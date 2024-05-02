# makefile configuration
COMMON_OBJECTS	=
CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU} -I../h
LDFLRAGS	= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC		= msp430_elf-gcc
AS		= msp430-elf-as

all: toy.elf

toy.elf:

load: toy.elf
	msp430loader.sh toy.elf

clean: rm -f *.0 *.elf
