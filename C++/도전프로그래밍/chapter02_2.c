//10진법을 2진법으로 표현하는 프로그램

#include <stdio.h>

int main()
{
    int decimal; //입력받을 10진수 변수 선언
    int binary[20] = { 0, }; // 2진수 저장할 배열
    int position = 0; // 나머지 변수 선언

    printf("10진수 정수 입력 : ");
    scanf("%d", &decimal);

    while (1)
    {
        binary[position] = decimal % 2;    // 2로 나누었을 때 나머지를 배열에 저장
        decimal = decimal / 2;             // 2로 나눈 몫을 저장

        position++;    // 자릿수 변경

        if (decimal == 0)    // 몫이 0이 되면 반복을 끝냄
            break;
    }

    // 배열의 요소를 역순으로 출력
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}