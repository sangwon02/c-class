#include <stdio.h>  //fopen, fclose �Լ��� ���� ��� ����
#include <stdlib.h> //eixt �Լ��� ���� ��� ����

//���α׷� 12-1

int main_13_1()
{
	FILE* fp;   //���� ������ ����
	char filename[80];	//����ڰ� �Է��� ���ϸ��� ������ �迭

	printf("���� ���� ���ϸ��� �Է��ϼ���. ");
	gets(filename);		//���ϸ��� ���� �Է¹ޱ�

	fp = fopen(filename, "r"); //������ ���� fp�� �����ϱ�
	if (fp == NULL)  //���� ���⿡ ������ ��� 
	{
		printf("\n���� ����: %s ������ �ִ��� Ȯ���غ�����.\n", filename);
		exit(1);	//���α׷� ���� ����
	}
	printf("\n������ �б� ���� ���������� �������ϴ�.");
	fclose(fp);	  //���� �ݱ�
	printf("\n������ �ݰ� ���α׷��� �����մϴ�.\n");

	return 0;
}