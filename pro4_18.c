#include<stdio.h>

int main_4_18()
{
	//���α׷� 5-14
	int i, n;
	double sum;

	printf("������ ����n�� �Է��ϼ���.:");
	scanf_s("%d", &n);

	sum = 0;
	for (i = 2; i <= n; i++) //�и�� 2���� n���� ����
		sum = sum + ((double)(i - 1) / i);
	//���� ���
	for (i = 2; i <= n; i++)
		printf("%d/%d +", i - 1, i);
	printf("\b\b=%.1lf\n", sum);

	return 0;
}