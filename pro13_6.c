#include <stdio.h>	//fopen, fscanf, fclose, feof �Լ��� ���� ��� ����
#include <stdlib.h>	//exit �Լ��� ���� ��� ����

//���α׷� 12-6

int main_13_6()
{
	FILE* fp;  //���� ������ ����
	int age;

	fp = fopen("age.txt", "r");	//������ �б� ���� ����
	if (fp == NULL)	//���� ���� ���� ó��
	{
		printf("���� ���� ����!\n"); exit(1);
	}

	//���Ͽ� ����� ��� ���̸� �о ����Ϳ� ���
	fscanf(fp, "%d", &age);	//�ϴ� ���Ͽ��� ����(����) �б⸦ �õ�
	while (!feof(fp))//���� ������ ���� ������ �ʾҴٸ� �ݺ�
	{
		printf("%2d \n", age);	//���Ͽ��� ���� ������ ����ͷ� ����ϱ�
		fscanf(fp, "%d", &age);	//���Ͽ��� ���� ���� �б⸦ �õ�
	}

	fclose(fp);

	return 0;
}
