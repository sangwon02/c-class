#include<stdio.h>

int main_4_2()
{
	//프로그램 4-13
	char x = 'a';
	int y;
	double z = 1.234;

	printf("y 입력 :");
	scanf_s("%d", &y);

	printf("변수 y의 값 = %d\n", y);
	printf("변수 y의 주소 = %p\n", &y);
	printf("\n");

	y = (y = 3, y + 5);
	printf("y = %d\n", y);
	printf("char형 변수 x의 크기 = %d\n", sizeof x);
	printf("int형 변수 y의 크기 = %d\n", sizeof y);
	printf("double형 변수 z의 크기 = %d\n", sizeof(z));
	printf("float형의 크기 = %d\n", sizeof(float));

	return 0;
}