#include<stdio.h>

int main_4_1()
{
	//���α׷� 4-12
	char ch = 'A';
	int x = 10, y = 4, sum;
	double pi = 3.14, avg;

	sum = ch + 2;  //�ڵ� �� ���� ��ȯ
	printf("sum = %d = %c \n", sum, sum);

	sum = pi;
	printf("sum= %d\n", sum);

	printf("���� �� x/y = %d \n", x / y);
	printf("�Ǽ� �� x/y = %lf \n", (double)x, (double)y);

	sum = (double)x / (double)y;
	printf("�߸��� ������ = %d \n", sum);

	avg = (double)(x/y);
	printf("�߸��� ������ = %lf \n", avg);

	avg = (double)x/y;
	printf("��Ȯ�� ������ = %lf \n", avg);



	return 0;
}