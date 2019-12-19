#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE* out,*in;
	int cnt;
	char str[100];
	in = fopen("C://Users/leo/Desktop/高階程式語言/HW8/108360230_高鈺棋/P18/welcome.txt", "r");
	out = fopen("C://Users/leo/Desktop/高階程式語言/HW8/108360230_高鈺棋/P18/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
			fprintf(out,"%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;

}