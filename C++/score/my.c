#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "my.h"

 

STUDENT student[20];

 

// 입력
int inputGrade(int index)
{
    char temp[1024] = "\0";   // 임시 저장
    int len = 0;        // 문자열 길이

 

do

{

printf("이름을 입력하세요 : ");
scanf_s("%s", temp, sizeof(temp));
// 문자열 길이 구하기
len = strlen(temp) + 1;

 

// 문자열 길이가 길면
if (len > sizeof(student[index].name))
    printf("이름이 너무 깁니다.\n");
else     // 길이가 짧으면
    strcpy_s(student[index].name, sizeof(student[index].name), temp);

} while (len > sizeof(student[index].name));

 

printf("국어점수를 입력하세요 : ");
scanf_s("%d", &student[index].scoreKOR);
printf("수학점수를 입력하세요 : ");
scanf_s("%d", &student[index].scoreMAT);
printf("영어점수를 입력하세요 : ");
scanf_s("%d", &student[index].scoreENG);
printf("과학점수를 입력하세요 : ");
scanf_s("%d", &student[index].scoreSCI);

 

getchar();


printf("평가를 입력하세요 : ");
gets_s(temp, sizeof(temp));
len = strlen(temp) + 1;
student[index].comment = (char*)malloc(len);
strcpy_s(student[index].comment, len, temp);

 

return 0;

}

 

// 계산
int calcGrade(int index, int *scoreTotal, float *scoreAverage, char *grade)
{
    // 총점 구하기
    *scoreTotal = student[index].scoreKOR + student[index].scoreMAT + student[index].scoreENG +     student[index].scoreSCI;


// 평균 구하기
*scoreAverage = *scoreTotal / 4.0F;

 

// 등급
if (*scoreAverage >= 90)
    *grade = 'A';
else if (*scoreAverage >= 80)
    *grade = 'B';
else if (*scoreAverage >= 70)
    *grade = 'C';
else if (*scoreAverage >= 60)
    *grade = 'D';
else
    *grade = 'F';

 

return 0;

}

 

// 출력
int outputGrade(int index)
{
    char grade = '\0';  // 등급
    int scoreTotal = 0; // 총점
    float scoreAverage = 0.0F;  // 평균

calcGrade(index, &scoreTotal, &scoreAverage, &grade);

 

 // 화면 출력
 printf("%s\t\t", student[index].name);
 printf("%c\t", grade);
 printf("%d\t", student[index].scoreKOR);
 printf("%d\t", student[index].scoreMAT);
 printf("%d\t", student[index].scoreENG);
 printf("%d\t", student[index].scoreSCI);

     printf("%d\t", scoreTotal);
     printf("%.1f\t", scoreAverage);
     printf("%s\n", student[index].comment);

 

return 0;

}

 

// 메모리 해제
int FreeMemory(int index)
{
    while (index)
    {
        index--;
        free(student[index].comment);
        student[index].comment = NULL;
    } // end while

 

return 0;

}


