#include <stdio.h> 	//fopen, fscanf, fclose �Լ��� ���� ��� ����
#include <stdlib.h>	// exit �Լ��� ���� ��� ����
#define SIZE 5			

//���α׷� 12-3

int main_13_3()
{
	FILE* fp;	//���� ������ ����
	char* f_name = "age.txt";//���ϸ�, char f_name[20]=��age.txt";�� ����
	int age, i;

	fp = fopen(f_name, "r");//f_name �̸��� ������ �б������ ����

	if (fp == NULL)	//���� ���� ���� ó��
	{
		printf(" %s ������ �� �� �����ϴ�. \n", f_name);
		exit(1);
	}

	for (i = 0; i < SIZE; i++) //������ ���̸� �о� ����Ϳ� ����ϱ�
	{
		//fp�� ����� ���Ͽ��� ���� �Ѱ��� �о� age�� �����ϱ�
		fscanf(fp, "%d", &age);

		//age�� ����� ���̸� ����Ϳ� ����ϱ�
		printf("%2d�� ȸ���� ���̴� %d�� \n", i + 1, age);
	}

	fclose(fp);	//fp�� ����� age.txt ������ �ݰ� ������ ����

	return 0;
}
