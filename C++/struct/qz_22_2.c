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
	struct employee arr[3];
	int i;

	for(i=0; i<3; i++){
		printf("이름을 입력하세요: ");
		scanf("%s", &arr[i].name);
		printf("주민번호를 입력하세요: ");
		scanf("%s", &arr[i].p_num);
		printf("연봉을 입력하세요: ");
		scanf("%d", &arr[i].salary);
	};

	for(i=0; i<3; i++){
		printf("이름: %s\n주민번호: %s\n연봉: %d\n", arr[i].name, arr[i].p_num, arr[i].salary);
	};
	return 0;
}
