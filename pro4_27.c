#include<stdio.h>

int main_4_27()
{
	//4�� �������� 12��

	int num, one, ten, hundred, thousand; //���� ����

	printf("���ڸ� ������ �Է��Ͻÿ� : "); //���ڸ� ������ �Է� ����
	scanf_s("%d", &num);

	one = num % 10; //���� �ڸ��� ����
	ten = num % 100 / 10; //���� �ڸ��� ����
	hundred = num % 1000 / 100; //���� �ڸ��� ����
	thousand = num / 1000; //õ�� �ڸ��� ����

	printf(" �Է��� ���� %dõ%d��%d��%d�Դϴ�.\n", thousand, hundred, ten, one);
	//�˸°� ��ġ �� ����Ʈ

	return 0;
}