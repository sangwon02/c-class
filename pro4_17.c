#include<stdio.h>

int main_4_17()
{
	//���α׷� 5-13
	int i, n, sum, factorial;

	printf("1���� n������ �հ� ���� ���մϴ�. ����n��?");
	scanf_s("%d", &n);
	 //1���� n������ ���� ���ϱ�
	sum = 0;
	for (i = 1; i <= n; i++)
		sum = sum + i;

	//1���� n������ �� n!�� ���ϱ�
	factorial = 1;
	for (i = 1; i <= n; i++)
		factorial = factorial * i;

	printf("1����%d������ ���� %d�Դϴ�.\n", n, sum);
	printf("1���� %d������ ���� %d�Դϴ�\n", n, factorial);

	return 0;
}