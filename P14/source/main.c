#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fpt;
	char ch;
	int count = 0;

	fpt = fopen("C://Users/leo/Desktop/高階程式語言/HW8/108360230_高鈺棋/P14/welcome.txt", "r");
	if (fpt == NULL)
		printf("檔案開啟失敗");
	else
	{
		while ((ch = getc(fpt)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fpt);
		printf("\n總共有%d個字元\n", count);
	}
	system("pause");
	return 0;
}