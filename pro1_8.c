#include <stdio.h>

int main_1_8()
{
	double width, height;
	double area;
	
	width = 3.0;
	height = 5.0;
	area = width * height / 2.0;

	printf("�غ� %lfcm, ����%lfcm�� �ﰢ���� ���� = ", width, height);
	printf("%lfcm'\n", area);

	return 0;
}