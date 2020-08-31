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