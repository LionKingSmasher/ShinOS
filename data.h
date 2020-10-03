#pragma once
#define videomaxline 25
#define videomaxcol 80

#define BACKSPACE 0x08
#define ENTER 0x13

#define TRUE 1
#define FALSE 0

#define DEBUG 24

unsigned char keyboard[videomaxcol];
unsigned short kindex;

unsigned short curline; //current line
unsigned short curcol; //current column