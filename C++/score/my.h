// 구조체
typedef struct _student
{
    char name[20];    // 이름
    int scoreKOR;     // 국어점수
    int scoreMAT;     // 수학점수
    int scoreENG;     // 영어점수
    int scoreSCI;     // 과학점수
    char *comment;    // 평가
} STUDENT;

 

// 입력
int inputGrade(int index);

 

// 계산
int calcGrade(int index, int *scoreTotal, float *scoreAverage, char *grade);

 

// 출력
int outputGrade(int index);

 

// 메모리 해제
int FreeMemory(int index);


