#include <stdio.h> 	//fopen, fprintf, fclose �Լ��� ���� ��� ����
#include <stdlib.h>  //exit �Լ��� ���� ��� ����

//���α׷� 12-4

int main_13_4()
{
	FILE* fp;//���� ������ ����
	char* f_name = "age.txt";//���ϸ�
	int age, i, n;

	fp = fopen(f_name, "a"); //f_name �̸��� ������ �߰������� ����

	if (fp == NULL)	//���� ���� ���� ó��
	{
		printf(" %s ���� ���� ����! \n", f_name); exit(1);
	}

	printf("ȸ���� ���̸� �Է��ϸ� %s ���Ͽ� �߰��մϴ�.\n", f_name);
	printf("�߰��� ȸ���� ����? ");
	scanf("%d", &n);//���Ͽ� �߰��� ȸ���� ���� ������ �Է¹ޱ�

	//n���� ���̸� Ű���忡�� �Է¹޾� ���Ͽ� �߰��ϱ�
	for (i = 0; i < n; i++)
	{
		printf("ȸ���� ���̴�? ");
		scanf("%d", &age);	//Ű���忡�� ȸ���� ���̸� �Է¹ޱ�

		fprintf(fp, "%d\n", age);//age�� ����� ���̸� fp�� ����� ���Ͽ� ����
	}
	fclose(fp);	//fp�� ����� age.txt ������ �ݰ� ������ ����
	printf("ȸ�� %d���� ���̸� %s ���Ͽ� �߰��߽��ϴ�.\n", n, f_name);

	return 0;
}