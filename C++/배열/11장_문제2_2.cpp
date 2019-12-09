#include <stdio.h>

int main()
{
	char arr[100];
	char temp;
	int len = 0;
	int i;

	printf("영단어를 입력하세요. \n");
	scanf("%s", arr);

	while(arr[len] != 0)  // 영단어의 길이 계산
		len++;

	for(i=0; i<len/2; i++)  // 영단어 뒤집기
	{
		temp=arr[i];  // 앞의 문자 임시로 저장
		arr[i]=arr[(len-i)-1]; //뒤의 문자를 앞으로
		arr[(len-i)-1]=temp;  //앞의 문자를 뒤로
	}
	printf("확인 : %s \n", arr);
	return 0;
}
