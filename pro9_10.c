#include <stdio.h>
//���α׷� 10-10

int main_9_10()
{
	char* first = "GilDong", * last = "Hong"; //�̸��� ��
	char* temp; //���ڿ� �ּҸ� �ӽ÷� ������ ������ ����

	printf("Name: %s %s\n", first, last);

	//������ ������ ����� �� �ּҸ� ��ȯ�� �� �����Ͱ� ����Ű�� ���ڿ� ��ȯ
	temp = first;
	first = last;
	last = temp;

	printf("Name: %s %s\n", first, last);

	return 0;
}
