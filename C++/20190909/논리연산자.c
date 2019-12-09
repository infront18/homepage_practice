#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	
	printf("두 개의 정수를 입력하세요.\n");
	scanf("%d %d", &num1, &num2);
	
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %.2f \n", num1, num2, (float)num1 / num2);
	printf("%d %% %d = %d \n", num1, num2, num1 % num2);
	printf("\n");
	
	printf("%d > %d = %d \n", num1, num2, num1 > num2);
	printf("%d < %d = %d \n", num1, num2, num1 < num2);
	printf("%d == %d = %d \n", num1, num2, num1 == num2);
	printf("%d != %d = %d \n", num1, num2, num1 != num2);
	printf("%d >= %d = %d \n", num1, num2, num1 >= num2);
	printf("%d <= %d = %d \n", num1, num2, num1 <= num2);
	printf("\n");
	
	printf("%d %d = %d \n", num1, num2, num1 > num2 && num1 != num2);
	printf("%d %d = %d \n", num1, num2, num1 < num2 && num1 != num2);
	printf("%d %d = %d \n", num1, num2, num1 > num2 || num1 != num2);
	return 0;
}

/*
& = 단항연산자, 주소 
&& = 논리연산자
num1 & num2 = 이항연산자 
*/

 
