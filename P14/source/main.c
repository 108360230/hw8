#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fpt;
	char ch;
	int count = 0;

	fpt = fopen("C://Users/leo/Desktop/�����{���y��/HW8/108360230_��౴�/P14/welcome.txt", "r");
	if (fpt == NULL)
		printf("�ɮ׶}�ҥ���");
	else
	{
		while ((ch = getc(fpt)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fpt);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	system("pause");
	return 0;
}