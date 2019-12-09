#include <stdio.h>

int main()
{
	int Kor, Eng, Math;
	double Avr;

	printf("국어, 영어, 수학 순으로 점수를 입력하시오. : ");
	scanf("%d %d %d", &Kor, &Eng, &Math);

	Avr = (Kor+Eng+Math) / 3.0;
	printf("평균 : %f \n", Avr);


	if (Avr >= 90.0)
		printf("A학점 \n");
	
	else if(Avr >= 80)
		printf("B학점 \n");
	
	else if(Avr >= 70)
		printf("C학점 \n");
	
	else if(Avr >= 50)
		printf("D학점 \n");
	
	else
		printf("F학점");
	
	return 0;
}