#include <stdio.h>
#include <stdlib.h>
#define max 80

int main(void)
{
	FILE *fpt;
	char str[max];
	int byte;
	fpt = fopen("C://Users/leo/Desktop/�����{���y��/HW8/108360230_��౴�/P17/output.txt", "r");
	while (!feof(fpt))
	{
		byte = fread(str, sizeof(char), max, fpt);
		str[byte] = '\0';
		printf("%s\n", str);
	}
	fclose(fpt);
	system("pause");
	return 0;

}