#include <stdio.h>

int main_2_5()
{

	double fachrenheit, celsius;
	fachrenheit = 72.0;
	celsius = (5.0f / 9.0f) * (fachrenheit - 32.0);

	printf("화씨온도는 %lf도는 섭씨온도 %lf도입니다.\n", fachrenheit, celsius);

	return 0;
}