#include<stdio.h>

int main_4_28()
{
	//4�� �������� 13��

	int a, b, c;//���� ����


	printf("�� ���� ���� : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	//3���� ������ �Է¹���

	printf(">> ���� ū �� = %d\n", (a = (a > b) ? a : b) > c ? a : c);
	//���� ū���� ����Ʈ �ϵ��� ����

	return 0;
}