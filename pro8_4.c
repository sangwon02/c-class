#include <stdio.h>
//���α׷� 9_4

double to_dollars(); //�Լ��� ���� ����

int salary;     //���� ���� ����
int main_8_4()
{
	printf("���޿���"); 
	scanf("%d", &salary);
	printf("��޿� %d���� %.1lf�޷� \n", salary, to_dollars());

	return 0;
}

//�� ���� �ݾ��� �޷��� ��ȯ�ϴ� �Լ�
double to_dollars()
{
	int exchange_rate = 1100;//���� ���� ����                    

	return (double)salary / exchange_rate;
}