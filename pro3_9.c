#include <stdio.h>

int main_3_9()
{
	double radius, pi = 3.141592;
	double circum, area, volume;

	printf("������(cm)�� �Է��ϼ���. ");
	scanf_s("%lf", &radius);

	circum = pi * 2 * radius;
	area = pi * radius * radius;
	volume =  area * radius * (4.0 / 3.0);

	printf("�ѷ� = %8.2lfcm\n", circum);
	printf("���� = %8.2lfcm��\n", area);
	printf("���� = %8.2lfcm��\n", volume);

	return 0;
}