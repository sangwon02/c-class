#include <stdio.h>
#include <conio.h>	//getch �Լ��� ���� ��� ����
#define SIZE 5
//���α׷� 10-5

int main_9_5()
{
	int quiz[SIZE];
	int i, count, sum;
	double ave;

	printf("%d���� ������ ������� �Է��ϼ���.\n\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d���� ���� ������? ", i + 1);
		scanf("%d", (quiz + i));//scanf("%d", &quiz[i]);

	}

	sum = 0;
	for (i = 0; i < SIZE; i++)
		sum = sum + *(quiz + i);

	ave = (double)sum / SIZE;

	count = 0;
	for (i = 0; i < SIZE; i++)
		if (*(quiz + i) < ave) 
			count++;

	printf("\n����� ������ �ƹ�Ű�� ��������. \n");
	getch(); //Ű����κ��� ���� �� ���� �Է¹޴´� �Ͻ� �����ϴ� ȿ��

	printf("\n===============\n");
	printf("���: %.1lf�� \n", ave);
	printf("��� �̸�: %d�� \n", count);
	printf("===============\n");

	return 0;
}
