#include <stdio.h>

int main_3_2()
{
	double radius, area, pi = 3.14;

	printf("�������� �Է��ϼ���. ");
	scanf_s("%lf", &radius);

	area = pi * radius * radius;

	printf("������ %.2lf ���� ������ %2lf�Դϴ�.\n", radius, area);

	
	return 0;
}