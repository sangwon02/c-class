#include<stdio.h>

int main_4_27()
{
	//4장 연습문제 12번

	int num, one, ten, hundred, thousand; //변수 생성

	printf("네자리 정수를 입력하시오 : "); //네자리 정수를 입력 받음
	scanf_s("%d", &num);

	one = num % 10; //일의 자리를 구함
	ten = num % 100 / 10; //십의 자리를 구함
	hundred = num % 1000 / 100; //백의 자리를 구함
	thousand = num / 1000; //천의 자리를 구함

	printf(" 입력한 수는 %d천%d백%d십%d입니다.\n", thousand, hundred, ten, one);
	//알맞게 배치 후 프린트

	return 0;
}