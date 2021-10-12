#include<stdio.h>

int main_4_25()
{
	//프로그램 5-21
	int i, n, sum, multi;

	printf("정수 n : "); scanf_s("%d", &n);

	i = 1; sum = 0; multi = 1;
	do
	{
		sum += i;//합구하기
		multi *= i;//곱하기
		i++;
	} while (i <= n);//i가 n이라 같아질때까지 반복

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	printf("1부터 %d까지의 곱은 %d입니다.\n", n, multi);

	return 0;
}