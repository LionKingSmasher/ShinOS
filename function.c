void kprintf(char* str, int line, int col, int color)
{
	char *video = (char*)(0xB8000 + 160 * line + col * 2);

	for(int i = 0; str[i] != 0; i++)
	{
		*video++ = str[i];
		*video++ = color;
	}
	return;
}

void line_clear(int line){
	char *video = (char *)(0xB8000+160*line);
	for(int i = 0; i<160; i++)
	{
		*video++ = 0; //ah
		*video++ = 0x03; //al
	}
}