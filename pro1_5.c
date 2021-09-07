#include <stdio.h>

int main_1_5()
{
	int a1, a2, a3;
	/*printf("a1 = %d, a2 = %d, a3 = %d\n", a1, a2, a3);
	변수초기화가 되지않아 실행이 안됨*/

	a1 = 10;
	a2 = 20;
	a3 = a1 + a2;

	printf("a1 = %d, a2 = %d, a3 = %d\n", a1, a2, a3);

	a3 = a3 / 2;

	printf("a1 = %d, a2 = %d, a3 = %d\n", a1, a2, a3);

	return 0;
}