#include<stdio.h>

int main_4_5()
{
	//���α׷� 5-1
	int temp;

	printf("���� �µ���?");
	scanf_s("%d", &temp); // temp�� �µ� �Է¹ޱ�

	if (temp < 0)
		printf("������ �����̸�");

	printf("���� �µ��� %d�����Դϴ�.\n", temp);

	return 0;
}