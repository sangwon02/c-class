#include <stdio.h> 	//fopen, fscanf, fclose, feof �Լ��� ���� ��� ���� 
#include <stdlib.h>	//exit �Լ��� ���� ��� ����

//���α׷� 12-5

int main_13_5()
{
	FILE* fp;  //���� ������ ����
	int age;

	fp = fopen("age.txt", "r");	//������ �б� ���� ����
	if (fp == NULL)	//���� ���� ���� ó��
	{
		printf("���� ���� ����!\n"); exit(1);
	}

	//���Ͽ� ����� ��� ���̸� �о ����Ϳ� ����ϱ�
	while (!feof(fp))	//������ ���� ������ �ʾҴٸ� �ݺ� ����
	{
		fscanf(fp, "%d", &age);	//���Ͽ��� ������ �о� age�� �����ϱ�
		printf("%2d�� \n", age);//���Ͽ��� ���� age�� ����ͷ� ����ϱ�
	}
	fclose(fp);	//fp�� ����� ���� �ݱ�

	return 0;
}

