#include <stdio.h> 	//fgetc, fopen, fclose �Լ��� ���� ��� ����
#include <stdlib.h>	//exit �Լ��� ���� ��� ����

//���α׷� 12-10

int main_13_8()
{
	FILE* fp1;	//���� ������
	char f_name1[30], ch;//���� ���ϸ� 

	printf("���� ���ϸ�: "); gets(f_name1); //���ϸ� �Է��ϱ�

	fp1 = fopen(f_name1, "r");
	if (fp1 == NULL)	//���� ���� ���� ó��
	{
		printf(" %s�� ������ �����ϴ�. \n", f_name1); exit(1);
	}

	//�ϴ� ���ڸ� ���� �� �����ߴٸ� ȭ�鿡 ����ϱ⸦ �ݺ� 
	while ((ch = fgetc(fp1)) != EOF)
		printf("%c", ch);//fputc(ch, stdout);�� ����	

	fclose(fp1);

	return 0;
}