#include<stdio.h>

int main_4_6()
{
	//프로그램 5-2
	int num;

	printf("정수를 입력하시오:");
	scanf_s("%d", &num);

	printf("입력한 수 %d는(은)", num);

	if (num % 2 == 0)
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");
	//짝수는 2의 배수인것을 이용


	return 0;
}