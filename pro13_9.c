#include <stdio.h> 	//fgetc, fputc, fopen, fclose �Լ��� ���� ��� ����
#include <stdlib.h> //exit �Լ��� ���� ��� ����

//���α׷� 12-11

int main_13_9()
{
	FILE* fp1, * fp2;//���� ���ϰ� ���纻 ���Ͽ� ���� ���� ������
	char f_name1[30], f_name2[30], ch; //���� ���ϸ�, ���纻 ���ϸ�

	printf("������ �����մϴ�.\n");

	//���� ������ �б� ���� ����
	printf("���� ���ϸ�: "); gets(f_name1);
	fp1 = fopen(f_name1, "r");
	if (fp1 == NULL)			//���� ���� ���� ó��
	{
		printf(" %s�� ������ �����ϴ�. \n", f_name1); exit(1);
	}

	//���纻 ������ ���� ���� ����
	printf("���纻 ���ϸ�: "); gets(f_name2);
	fp2 = fopen(f_name2, "w");	//���纻�� ���� ���� ����
	if (fp2 == NULL)//���� ���� ���� ó��
	{
		printf(" %s�� ������ �����ϴ�. \n", f_name2); exit(1);
	}

	//������ ���� �������� �ʾƼ� ch�� ����� ���� EOF�� �ƴ϶�� ���纻�� ���⸦ �ݺ�
	while ((ch = fgetc(fp1)) != EOF)
		fputc(ch, fp2);	//���纻 ���Ͽ� ���� ���� ����

	fclose(fp1); fclose(fp2);	
	printf("���� %s�� ������ ���纻 %s�� ����Ǿ����ϴ�. \n", f_name1, f_name2);

	return 0;
}