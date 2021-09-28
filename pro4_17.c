#include<stdio.h>

int main_4_17()
{
	//프로그램 5-13
	int i, n, sum, factorial;

	printf("1부터 n까지의 합과 곱을 구합니다. 정수n은?");
	scanf_s("%d", &n);

	sum = 0;
	for (i = 1; i <= n; i++)
		sum = sum + i;

	factorial = 1;
	for (i = 1; i <= n; i++)
		factorial = factorial * i;

	printf("1부터%d까지의 합은 %d입니다.\n", n, sum);
	printf("1부터 %d까지의 곱은 %d입니다\n", n, factorial);

	return 0;
}