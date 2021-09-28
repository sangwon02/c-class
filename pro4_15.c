#include<stdio.h>

int main_4_15()
{
	//프로그램 5-11
	int line, star;

	for (line = 1; line <= 5; line++)
	{
		for (star = 1; star <= line; star++)
			printf("*");
		printf("\n");
	}


	return 0;
}