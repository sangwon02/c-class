#include<stdio.h>

int main_4_25()
{
	//���α׷� 5-21
	int i, n, sum, multi;

	printf("���� n : "); scanf("%d", &n);

	i = 1; sum = 0; multi = 1;
	do
	{
		sum += i;
		multi *= i;
		i++;
	} while (i <= n);

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, multi);

	return 0;
}