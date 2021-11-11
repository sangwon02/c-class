#include <stdio.h>

void swap_value(int x, int y); //���� ���� ȣ�� ���
void swap_address(int* x, int* y);//�ּҿ� ���� ȣ�� ���
//���α׷� 10-8

int main_9_8()
{
	int x = 100, y = 200;

	printf("In main: x=%d, y=%d \n\n", x, y);

	swap_value(x, y);	//���� ���� ȣ��: x�� y�� ���� ����
	printf("In main: x=%d, y=%d (swap_value(x, y) ȣ�� ��)\n\n", x, y);

	swap_address(&x, &y);//�ּҿ� ���� ȣ��: x�� y�� �ּҸ� ����
	printf("In main: x=%d, y=%d (swap_address(&x, &y) ȣ�� ��)\n\n", x, y);

	return 0;
}

//�Ű����� x�� y�� ���� ��ȯ������ �ڽ��� ȣ���� �Լ��� �� �μ��� ��ȯ���� ���ϴ� �Լ�
void swap_value(int x, int y)
{
	int temp;		

	temp = x;
	x = y;
	y = temp;
	printf("In swap_value: x=%d, y=%d \n", x, y);
}

//������ �Ű� ���� x�� y�� �̿��� �ڽ��� ȣ���� �Լ��� �� �μ��� ���� ��ȯ�ϴ� �Լ�
void swap_address(int* x, int* y) 
//x, y�� �ּҸ� �����ϴ� ������ ������ ����
{
	int temp; 				

	temp = *x; 	//x�� ����Ű�� ���� ���� temp�� ����
	*x = *y; 	//y�� ����Ű�� ���� ���� x�� ����Ű�� ���� ����
	*y = temp;	//temp�� ���� y�� ����Ű�� ���� ����
	printf("In swap_address: *x=%d, *y=%d \n", *x, *y);
}