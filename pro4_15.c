#include<stdio.h>

int main_4_15()
{
	//���α׷� 5-11
	int line, star;

	for (line = 1; line <= 5; line++) //for���� 5�� �����ϴ� for��
	{
		for (star = 1; star <= line; star++) //line�� �þ�� ���� *�� �����
			printf("*");
		printf("\n");
	}


	return 0;
}