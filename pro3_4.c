#include <stdio.h>

int main_3_4()
{
	int x, y;

	printf("두 정수를 입력하세요.>>");
	scanf_s("%d %d", &x, &y);

	printf("(%d > %d)의 결괴는 &d입니다.\n", x, y, x > y);
	printf("(%d < %d)의 결괴는 &d입니다.\n", x, y, x < y);
	printf("(%d >= %d)의 결괴는 &d입니다.\n", x, y, x >= y);
	printf("(%d <= %d)의 결괴는 &d입니다.\n", x, y, x <= y);
	printf("(%d == %d)의 결괴는 &d입니다.\n", x, y, x == y);
	printf("(%d != %d)의 결괴는 &d입니다.\n", x, y, x != y);

	return 0;
}