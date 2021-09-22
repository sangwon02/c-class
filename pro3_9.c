#include <stdio.h>

int main_3_9()
{
	double radius, pi = 3.141592;
	double circum, area, volume;

	printf("반지름(cm)을 입력하세요. ");
	scanf_s("%lf", &radius);

	circum = pi * 2 * radius;
	area = pi * radius * radius;
	volume =  area * radius * (4.0 / 3.0);

	printf("둘레 = %8.2lfcm\n", circum);
	printf("면적 = %8.2lfcm²\n", area);
	printf("부피 = %8.2lfcm³\n", volume);

	return 0;
}