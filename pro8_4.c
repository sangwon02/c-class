#include <stdio.h>
//프로그램 9_4

double to_dollars(); //함수의 원형 선언

int salary;     //전역 변수 선언
int main_8_4()
{
	printf("월급여는"); 
	scanf("%d", &salary);
	printf("얼급여 %d원은 %.1lf달러 \n", salary, to_dollars());

	return 0;
}

//원 단위 금액을 달러로 변환하는 함수
double to_dollars()
{
	int exchange_rate = 1100;//지역 변수 선언                    

	return (double)salary / exchange_rate;
}