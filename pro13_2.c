#include <stdio.h>	//fopen, fprintf, fclose �Լ��� ���� ��� ����
#include <stdlib.h>	//exit �Լ��� ���� ��� ����
#define SIZE 5		

//���α׷� 12-2

int main_13_2()
{
	FILE* fp;		//���� ������ ����
	char* f_name = "age.txt";//���ϸ�
	int age, i;

	fp = fopen(f_name, "w"); //f_name�̸��� ������ ��������� ����

	if (fp == NULL)	//���� ���� ���� ó��
	{
		printf(" %s ���� ���� ����! \n", f_name);
		exit(1);
	}

	printf("ȸ�� %d���� ���̸� �Է��ϸ� ���Ϸ� �����մϴ�.\n", SIZE);

	for (i = 0; i < SIZE; i++)	//S���̸� Ű���忡�� �Է¹޾� ���Ͽ� ����
	{
		printf("%2d�� ȸ���� ���̴�? ", i + 1);
		scanf("%d", &age); //Ű���忡�� ȸ���� ���̸� �Է�

		fprintf(fp, "%d\n", age);//age�� ���� fp�� ����� ���Ͽ� ����
	}

	fclose(fp); 	//fp�� ����� age.txt ������ �ݰ� ������ ����
	printf("ȸ�� %d���� ���̸� %s ���Ͽ� �����߽��ϴ�.\n", SIZE, f_name);

	return 0;
}