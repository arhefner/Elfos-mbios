
none:
	@echo Specify target as one of mini, superelf, rc1802, max, elfii

mini: mbios.asm
	asm02 -L -b -D1802MINI mbios.asm

superelf: mbios.asm
	asm02 -L -b -DSUPERELF mbios.asm

rc1802: mbios.asm
	asm02 -L -b -DRC1802 mbios.asm

max: mbios.asm
	asm02 -L -b -D1802MAX mbios.asm

elfii: mbios.asm
	asm02 -L -b -DELFII mbios.asm

test: mbios.asm
	asm02 -L -b -DTEST mbios.asm

clean:
	@rm -f mbios.bin mbios.lst

