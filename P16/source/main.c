#include <stdio.h>
#include <stdlib.h>
#define enter 13
#define max 80


int main(void)
{
	FILE* fpt;
	char str[max], ch;
	int i = 0;
	fpt = fopen("C://Users/leo/Desktop/�����{���y��/HW8/108360230_��౴�/P16/output.txt", "a");
	printf("�п�J�r��A���Uenter������J:\n");
	while ((ch = getche()) != enter && i < max)
		str[i++] = ch;
	putc('\n', fpt);
	fwrite(str, sizeof(char), i, fpt);
	fclose(fpt);
	printf("�ɮת��[����");
	return 0;
}