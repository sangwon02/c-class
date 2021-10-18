#include <stdio.h>
// cm_to_feet 함수의 원형 선언
double cm_to_feet(double cm_value);
//연습문제 4번

int main_6_11()
{
	double height, feet;

	printf("당신의 키는(cm)?");
	scanf_s("%lf", &height);

	printf("키 %.lf cm는 %.1lf feet입니다.", height, cm_to_feet(height));

	return 0;
}

// cm_to_feet 함수의 정의
double cm_to_feet(double cm_value)
{
	double feet;

	feet = cm_value / 30.48;

	return feet;
}