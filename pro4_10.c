#include<stdio.h>
#include<stdlib.h>

int main_4_10()
{
	//프로그램5-6
	int x, y, result;
	char op;
	printf("수식을 입력하시오.\n");
	printf("연산자의 종류 : + - * / %% & | ^\n");
	printf("입력 예: 2 + 3\n\n입력>>");
	scanf_s("%d", &x);
	scanf_s("%c", &op);
	scanf_s("%d", &y);

	//op에 저장된 연산자에 따라 해당 연산을 적용한 결과를 result에 저장하기
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
		printf("잘못된 연산자입니다.\n");
		exit(0); //프로그램의 실행을 끝낸다.
	}
	printf("\n결과>>%d %c %d = %d", x, op, y, result);


	return 0;
}