#include<stdio.h>

int main_4_15()
{
	//프로그램 5-11
	int line, star;

	for (line = 1; line <= 5; line++) //for문을 5번 실행하는 for문
	{
		for (star = 1; star <= line; star++) //line이 늘어남에 따라 *를 출력함
			printf("*");
		printf("\n");
	}


	return 0;
}