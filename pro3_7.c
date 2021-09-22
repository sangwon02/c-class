#include <stdio.h>

int main_3_7()
{
	int x;

	printf("정수 입력 >> ");
	scanf_s("%d", &x);

	(x % 2 == 0) ? printf("%d는 짝수입니다. \n", x) :
		printf("%d는 홀수입니다.\n", x);


	return 0;
}