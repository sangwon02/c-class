#include <stdio.h>

int main_3_11()
{
	int r = 5;
	double length;

	length = 2 * 3.14 * r;
	
	printf("둘레를 구할 원의 반지름은?");
	scanf_s("%d", &r);
	printf("반지름이 %d인 원의 둘레는 %.2lf \n", r, length);
	
	return 0;
}
