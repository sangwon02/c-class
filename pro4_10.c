#include<stdio.h>
#include<stdlib.h>

int main_4_10()
{
	//���α׷�5-6
	int x, y, result;
	char op;
	printf("������ �Է��Ͻÿ�.\n");
	printf("�������� ���� : + - * / %% & | ^\n");
	printf("�Է� ��: 2 + 3\n\n�Է�>>");
	scanf_s("%d", &x);
	scanf_s("%c", &op);
	scanf_s("%d", &y);

	//op�� ����� �����ڿ� ���� �ش� ������ ������ ����� result�� �����ϱ�
	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else if (op == '&')
		result = x & y;
	else if (op == '|')
		result = x | y;
	else if (op == '^')
		result = x ^ y;
	else
	{
		printf("�߸��� �������Դϴ�.\n");
		exit(0); //���α׷��� ������ ������.
	}
	printf("\n���>>%d %c %d = %d", x, op, y, result);


	return 0;
}