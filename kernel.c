#include "function.h"
#include "interrupt.h"

void title();
void clear();

void main()
{
	clear();
	title();
	init_intdesc();
}

void title()
{
	kprintf("S", 0, 0, 0x01);
	kprintf("h", 0, 1, 0x02);
	kprintf("i", 0, 2, 0x03);
	kprintf("n", 0, 3, 0x04);
	kprintf("O", 0, 4, 0x05);
	kprintf("S", 0, 5, 0x06);
}

void clear()
{
	for(int i = 0; i<20; i++){
		for(int j = 0; j<160; j++){
			kprintf(" ", i, j, 0x00);
		}
	}
}