#include <stdio.h>

int main_3_8()
{
	int x = 1, y = 2, z = 3;
	x = ++x * 5;
	y = ++y * 5;
	z = 5 - --z;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}