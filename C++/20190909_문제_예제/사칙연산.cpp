#include <stdio.h>

int main()
{
	double num1, num2;
	printf("두 실수를 입력하세요.");
	scanf("%lf %lf", &num1, &num2);
	
	printf("두 실수의 합 : %lf \n", num1 + num2);
	printf("두 실수의 차 : %lf \n", num1 - num2);
	printf("두 실수의 곱 : %lf \n", num1 * num2);
	printf("두 실수의 나눗셈 : %lf \n", num1 / num2);
	
	return 0;
}

