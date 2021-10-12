#include<stdio.h>

int main_4_14()
{
	//프로그램 5-10
	int line, star;

	for (line = 1; line <= 5; line++) //*****를 5행 출력하는 for문
	{
		for (star = 1; star <= 5; star++) //*를 연속으로 5번 출력하는 for문
			printf("*");
		printf("\n");
	}


	return 0;
}