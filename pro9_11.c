#include <stdio.h>
#include <string.h>			//strcpy�Լ��� ���� ��� ����
//���α׷� 10-11

int main_9_11()
{
	char first[10] = "GilDong", last[10] = "Hong"; //�̸�����
	char temp[10];	//���ڿ��� �ӽ÷� ������ �迭

	printf("Name: %s %s\n", first, last);

	// �迭�� ������ ���� ��ȯ�Ͽ� �� ���ڿ��� ��ȯ
	strcpy(temp, first);//first �迭�� ���ڿ��� temp �迭�� ����
	strcpy(first, last);//last �迭�� ���ڿ��� first �迭�� ����
	strcpy(last, temp); //temp �迭�� ���ڿ��� last �迭�� ����

	printf("Name: %s %s\n", first, last);

	return 0;
}
