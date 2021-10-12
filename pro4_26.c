#include<stdio.h>

int main_4_26()
{
	//4장 연습문제 8번
	int month; //변수 생성

	printf("월(1~12)입력 : ");
	scanf_s("%d", &month); //월을 입력 받음
	printf(">> %d월은 %s반기입니다.\n", month, month <= 6 ? "상" : "하"); 
	//입력 받은 월이 6이하이면 상반기 7이상이면 하반기가 되도록 프린트

	return 0;
}