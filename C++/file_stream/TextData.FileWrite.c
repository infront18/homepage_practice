#include <stdio.h>

int main(void)
{
	FILE * fp=fopen("simple.txt", "wt");
	if(fp==NULL)
	{
		puts("file open failed!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	return 0;
}
