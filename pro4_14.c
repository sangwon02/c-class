#include<stdio.h>

int main_4_14()
{
	//���α׷� 5-10
	int line, star;

	for (line = 1; line <= 5; line++) //*****�� 5�� ����ϴ� for��
	{
		for (star = 1; star <= 5; star++) //*�� �������� 5�� ����ϴ� for��
			printf("*");
		printf("\n");
	}


	return 0;
}