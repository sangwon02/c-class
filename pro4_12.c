#include<stdio.h>
#include<stdlib.h>

int main()
{
	//���α׷� 5-8
	int x, y, result;
	char op;

	printf("������ �Է��Ͻÿ�.\n");
	printf("�������� ���� : + - * / %% & | ^\n");
	printf("�Է� ��: 2 + 3\n\n�Է�>>");
	scanf_s("%d", &x);
	scanf_s("%c", &op);
	scanf_s("%d", &y);

	switch (op)
	{
	case '+':result = x + y; break;
	case '-':result = x - y; break;
	case '*':result = x * y; break;
	case '/':result = x / y; break;
	case '%':result = x % y; break;
	case '&':result = x & y; break;
	case '|':result = x | y; break;
	case '^':result = x ^ y; break;
	default: printf("�߸��� �������Դϴ�.\n"); exit(0);
	}
	printf("\n��� >> %d %c %d = %d\n", x, op, y, result);

	return 0;
}