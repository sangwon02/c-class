#include <stdio.h>
// cm_to_feet �Լ��� ���� ����
double cm_to_feet(double cm_value);
//�������� 4��

int main_6_11()
{
	double height, feet;

	printf("����� Ű��(cm)?");
	scanf_s("%lf", &height);

	printf("Ű %.lf cm�� %.1lf feet�Դϴ�.", height, cm_to_feet(height));

	return 0;
}

// cm_to_feet �Լ��� ����
double cm_to_feet(double cm_value)
{
	double feet;

	feet = cm_value / 30.48;

	return feet;
}