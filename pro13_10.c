#include <stdio.h>	//fputs, fgets �Լ��� ���� ��� ����
#include <stdlib.h>//exit �Լ��� ���� ��� ����

//���α׷� 12-12
#define SIZE 5

int main_13_10()
{
	char f_name[20] = "address.txt";
	char info[80];

	FILE* fp = fopen(f_name, "w");//�ּҸ� ������ ���� ����
	int i;

	if (fp == NULL)	//���� ���� ���� ó��
	{
		printf("���� ���� ����! \n"); exit(1);
	}

	printf("�̸� ��ȭ��ȣ �ּ� �Է� �� ����Ű�� ��������.(%d��) \n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d. ", i + 1);
		gets(info);	//Ű����� �� �྿ �Է¹޴´�.    
		fputs(info, fp);//�Է¹��� ���ڿ��� ���Ͽ� �����Ѵ�.
		fputs("\n", fp);  //���ڿ� �ڿ� ���� ���ڸ� �����Ѵ�.
	}
	fclose(fp);	//���� �ݱ�

	fp = fopen(f_name, "r");//�ּҸ� ������ ���� ����
	if (fp == NULL)	//���� ���� ���� ó��
	{
		printf("���� ���� ����! \n"); exit(1);
	}

	printf("\n>> �ּҷ� ��� << \n"); exit(1);
	fgets(info, 80, fp);//���Ͽ��� ���ڿ��� �о� info ���ڿ��� �����Ѵ�
	while (!feof(fp))	//������ ���� ������ �ʾҴٸ� �ݺ��Ѵ�
	{
		printf("%s", info);	//���Ͽ��� ���� ���ڿ��� ����Ϳ� ���
		fgets(info, 80, fp);
	}
	fclose(fp);					

	return 0;
}
