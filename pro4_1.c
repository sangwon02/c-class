#include<stdio.h>

int main_4_1()
{
	//���α׷� 4-12
	char ch = 'A';
	int x = 10, y = 4, sum;
	double pi = 3.14, avg;

	sum = ch + 2;  //�ڵ� �� ���� ��ȯ
	printf("sum = %d = %c \n", sum, sum);

	sum = pi; //�ڵ� �� ���� ��ȯ
	printf("sum= %d\n", sum);

	printf("���� �� x/y = %d \n", x / y);
	printf("�Ǽ� �� x/y = %lf \n", (double)x, (double)y);
	//���� ����ȯ

	sum = (double)x / (double)y;  //���� �� ��ȯ �� �ڵ� �� ���� ��ȯ
	printf("�߸��� ������ = %d \n", sum);

	avg = (double)(x/y); //���� �� ��ȯ�� �ڵ� �� ���� ��ȯ
	printf("�߸��� ������ = %lf \n", avg);
	//�߸��� ������ ���

	avg = (double)x/y; //���� �� ��ȯ�� �ڵ� �� ���� ��ȯ
	printf("��Ȯ�� ������ = %lf \n", avg);
	//��Ȯ�� ������ ���

	return 0;
}