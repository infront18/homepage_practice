#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("data.txt", "wt");
	if(fp==NULL)
	{
		puts("file open failed!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}
