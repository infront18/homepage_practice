#include<stdio.h>

int main()

{
	int N; // 시험 본 과목의 갯수
	double MAX=0.0; // 최댓값

	scanf("%d",&N); // 시험 본 과목의 갯수 입력 

	double A[N]; // 시험 본 과목 크기의 배열 생성 
	double sum=0.0; 

	for(int i=0; i<N; i++) {
		scanf("%lf", &A[i]); // 점수값 넣기 
	}
		for(int i=0; i<N; i++) {
			if(A[i] > MAX) {
			   MAX = A[i]; // 최댓값 찾기 
			}
	}
	
	for(int i=0; i<N; i++) {
		sum = sum + ((A[i] / MAX) * 100.0);
	}

	printf("%0.2lf", sum / N);
	return 0;
}



