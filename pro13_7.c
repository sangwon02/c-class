#include <stdio.h> 	//fputc, fopen, fclose �Լ��� ���� ��� ����
#include <stdlib.h>	//exit �Լ��� ���� ��� ����

//���α׷� 12-9

int main_13_7()
{
	FILE* fp2;	//���� ������
	char f_name2[30], ch;//���⸦ �� ���ϸ� 

	printf("���� ���ϸ�: "); gets(f_name2); //���ϸ� �Է�

	fp2 = fopen(f_name2, "w");	//������ ��������� ����
	if (fp2 == NULL)//���� ���� ���� ó��
	{
		printf(" %s ���� ����� ���� \n", f_name2); exit(1);
	}

	scanf("%c", &ch);//Ű���忡�� ���� �� �� �Է¹ޱ�
	while (ch != '&')//�Է� ���� �˸��� &�� �ƴ϶�� ��� �Է��ϱ�
	{
		fputc(ch, fp2);	//��� �Է¹��� ch�� ����� ���ڸ� ���Ͽ� ����ϱ�
		scanf("%c", &ch);	//ch = fgetc(stdin);�� ����
	}
	fclose(fp2);	
	return 0;
}
