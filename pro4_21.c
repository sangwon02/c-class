#include<stdio.h>

int main_4_21()
{
	//���α׷� 5-17
	int i, n;

	printf("����� ���ϴ� ����?");
	scanf_s("%d", &n);

	for (i = 1; i <= 9; i++) //������ ��� for��
		printf("%d * %d = %2d\n", n, i, n * i);

	return 0;
}