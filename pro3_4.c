#include <stdio.h>

int main_3_4()
{
	int x, y;

	printf("�� ������ �Է��ϼ���.>>");
	scanf_s("%d %d", &x, &y);

	printf("(%d > %d)�� �ᱫ�� &d�Դϴ�.\n", x, y, x > y);
	printf("(%d < %d)�� �ᱫ�� &d�Դϴ�.\n", x, y, x < y);
	printf("(%d >= %d)�� �ᱫ�� &d�Դϴ�.\n", x, y, x >= y);
	printf("(%d <= %d)�� �ᱫ�� &d�Դϴ�.\n", x, y, x <= y);
	printf("(%d == %d)�� �ᱫ�� &d�Դϴ�.\n", x, y, x == y);
	printf("(%d != %d)�� �ᱫ�� &d�Դϴ�.\n", x, y, x != y);

	return 0;
}