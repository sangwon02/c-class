#include<stdio.h>

int main_4_25()
{
	//���α׷� 5-21
	int i, n, sum, multi;

	printf("���� n : "); scanf_s("%d", &n);

	i = 1; sum = 0; multi = 1;
	do
	{
		sum += i;//�ձ��ϱ�
		multi *= i;//���ϱ�
		i++;
	} while (i <= n);//i�� n�̶� ������������ �ݺ�

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, multi);

	return 0;
}