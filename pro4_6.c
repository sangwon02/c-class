#include<stdio.h>

int main_4_6()
{
	//���α׷� 5-2
	int num;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);

	printf("�Է��� �� %d��(��)", num);

	if (num % 2 == 0)
		printf("¦���Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");
	//¦���� 2�� ����ΰ��� �̿�


	return 0;
}