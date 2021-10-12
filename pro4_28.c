#include<stdio.h>

int main_4_28()
{
	//4장 연습문제 13번

	int a, b, c;//변수 생성


	printf("세 개의 정수 : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	//3개의 정수를 입력받음

	printf(">> 가장 큰 수 = %d\n", (a = (a > b) ? a : b) > c ? a : c);
	//가장 큰수를 프린트 하도록 설정

	return 0;
}