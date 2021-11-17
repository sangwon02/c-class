#include <stdio.h>
//연습문제 7번
int main_10_8()
{
	int* ptr, a[5] = { 10, 20, 30, 40, 50 };
	ptr = a;
	printf("간접 참조: %d, 직접 참조: %d", *(ptr + 3), ptr[3]);

	return 0;
}