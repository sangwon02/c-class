#include<stdio.h>

int main_4_4()
{
	//프로그램 4-15
	//입력 받은 문자의 비트열 구하기
	char ch;

	printf("문자 입력 :");
	scanf_s("%c", &ch);  //ch = getchar();

	printf("%2d", ch & (1 << 7) ? 1 : 0);
	printf("%2d", ch & (1 << 6) ? 1 : 0);
	printf("%2d", ch & (1 << 5) ? 1 : 0);
	printf("%2d", ch & (1 << 4) ? 1 : 0);
	printf("%2d", ch & (1 << 3) ? 1 : 0);
	printf("%2d", ch & (1 << 2) ? 1 : 0);
	printf("%2d", ch & (1 << 1) ? 1 : 0);
	printf("%2d\n", ch & (1) ? 1 : 0);

	return 0;
}