#pragma once

void init_intdesc();
void idt_ignore();
void idt_timer();
void idt_keyboard();

unsigned char transScan(unsigned char);

struct IDT
{
	unsigned short offsetl;
	unsigned short selector;
	unsigned short type;
	unsigned short offseth;
}__attribute__((packed));

struct IDTR //IDT 테이블 개수 정의
{
	unsigned short size;
	unsigned int addr;
}__attribute__((packed));