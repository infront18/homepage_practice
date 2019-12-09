#include <stdio.h>

int main()
{
	int H, M;
	scanf("%d %d", &H, &M);

	M = M - 45;

	if (M < 0) {
		if (H == 0) {
			H=23;
		}
		else {
			H = H -1;
		}
		M = M + 60;
		
	}
	printf("%d %d\n", H, M);

	return 0;
}

