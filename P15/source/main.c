#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fpt1, *fpt2;
	char ch;
	fpt1 = fopen("C://Users/leo/Desktop/�����{���y��/HW8/108360230_��౴�/P15/welcome.txt", "r");
	fpt2 = fopen("C://Users/leo/Desktop/�����{���y��/HW8/108360230_��౴�/P15/output.txt", "w");

	if (fpt1 == NULL || fpt2 == NULL)
		printf("�ɮ׶}�ҥ���");
	else
	{
		while ((ch = getc(fpt1)) != EOF)
			putc(ch, fpt2);
		fclose(fpt1);
		fclose(fpt2);
		printf("�ɮ׫�������");
	}
	system("pause");
	return 0;

}