#include<stdio.h>
#include<stdlib.h>

int main_4_12()
{
	//프로그램 5-8
	int x, y, result;
	char op;

	printf("수식을 입력하시오.\n");
	printf("연산자의 종류 : + - * / %% & | ^\n");
	printf("입력 예: 2 + 3\n\n입력>>");
	scanf_s("%d", &x);
	scanf_s("%c", &op);
	scanf_s("%d", &y);

	switch (op) //연산자의 종료별로 설정
	{
	case '+':result = x + y; break;
	case '-':result = x - y; break;
	case '*':result = x * y; break;
	case '/':result = x / y; break;
	case '%':result = x % y; break;
	case '&':result = x & y; break;
	case '|':result = x | y; break;
	case '^':result = x ^ y; break;
	default: printf("잘못된 연산자입니다.\n"); exit(0);
	}
	printf("\n결과 >> %d %c %d = %d\n", x, op, y, result);

	return 0;
}