#include <stdio.h>

int main_3_7()
{
	int x;

	printf("���� �Է� >> ");
	scanf_s("%d", &x);

	(x % 2 == 0) ? printf("%d�� ¦���Դϴ�. \n", x) :
		printf("%d�� Ȧ���Դϴ�.\n", x);


	return 0;
}