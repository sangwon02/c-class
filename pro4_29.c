#include<stdio.h>

int main_4_29()
{
	//4장 연습문제 14번

	int a; //변수 생성

	printf("정수 입력 : ");
	scanf_s("%d", &a); //정수를 입력 받음

	printf("%d >> %d = %d\n", a, 3, a >> 3);
	//오른쪽으로 3비트 이동시킨 결과 프린트
	printf("%d << %d = %d\n", a, 3, a << 3);
	//왼쪽으로 3비트 이동시킨 결과 프린트

	return 0;
}