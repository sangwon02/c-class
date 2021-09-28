#include<stdio.h>

int main_4_14()
{
	//프로그램 5-10
	int line, star;

	for (line = 1; line <= 5; line++)
	{
		for (star = 1; star <= 5; star++)
			printf("*");
		printf("\n");
	}


	return 0;
}