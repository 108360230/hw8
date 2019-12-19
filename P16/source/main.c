#include <stdio.h>
#include <stdlib.h>
#define enter 13
#define max 80


int main(void)
{
	FILE* fpt;
	char str[max], ch;
	int i = 0;
	fpt = fopen("C://Users/leo/Desktop/高階程式語言/HW8/108360230_高鈺棋/P16/output.txt", "a");
	printf("請輸入字串，按下enter結束輸入:\n");
	while ((ch = getche()) != enter && i < max)
		str[i++] = ch;
	putc('\n', fpt);
	fwrite(str, sizeof(char), i, fpt);
	fclose(fpt);
	printf("檔案附加完成");
	return 0;
}