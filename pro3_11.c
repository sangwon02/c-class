#include <stdio.h>

int main_3_11()
{
	int r = 5;
	double length;

	length = 2 * 3.14 * r;
	
	printf("�ѷ��� ���� ���� ��������?");
	scanf_s("%d", &r);
	printf("�������� %d�� ���� �ѷ��� %.2lf \n", r, length);
	
	return 0;
}
