#include<stdio.h>

int main_4_18()
{
	//프로그램 5-14
	int i, n;
	double sum;

	printf("임의의 정수n을 입력하세요.:");
	scanf_s("%d", &n);

	sum = 0;
	for (i = 2; i <= n; i++)
		sum = sum + ((double)(i - 1) / i);

	for (i = 2; i <= n; i++)
		printf("%d/%d +", i - 1, i);
	printf("\b\b=%.1lf\n", sum);

	return 0;
}