#include <stdio.h>

int main_2_6()
{
	double d = 12.34e-50;

	printf("d = %.5lf\n", d);
	printf("d = %.50lf\n", d);

	printf("d = %.5e\n", d);
	printf("d = %.5E\n", d);
	return 0;
}