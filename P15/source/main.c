#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fpt1, *fpt2;
	char ch;
	fpt1 = fopen("C://Users/leo/Desktop/高階程式語言/HW8/108360230_高鈺棋/P15/welcome.txt", "r");
	fpt2 = fopen("C://Users/leo/Desktop/高階程式語言/HW8/108360230_高鈺棋/P15/output.txt", "w");

	if (fpt1 == NULL || fpt2 == NULL)
		printf("檔案開啟失敗");
	else
	{
		while ((ch = getc(fpt1)) != EOF)
			putc(ch, fpt2);
		fclose(fpt1);
		fclose(fpt2);
		printf("檔案拷貝完成");
	}
	system("pause");
	return 0;

}