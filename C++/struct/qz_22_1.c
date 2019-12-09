#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char name[20];
	char p_num[20];
	int salary;
};

int main()
{
	struct employee a;

	printf("이름을 입력하세요: ");
	scanf("%s", &a.name);
	printf("주민번호를 입력하세요: ");
	scanf("%s", &a.p_num);
	printf("연봉을 입력하세요: ");
	scanf("%d", &a.salary);

	printf("이름: %s\n주민번호: %s\n연봉: %d\n", a.name, a.p_num, a.salary);
	return 0;
}
