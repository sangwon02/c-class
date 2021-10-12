#include <stdio.h>

int main_5_7()
{
	//5장 연습문제 6번
	
	char ch;
	printf("문자 입력 : ");
	scanf_s("%c", &ch);

	if (ch >= '0' && ch <= '9') //숫자이면 출력
		printf("숫자입니다");
	else if (ch >= 'A' && ch <= 'Z')  //대문자이면 출력
		printf("알파벳 대문자입니다");
	else if (ch >= 'a' && ch <= 'z')   //소문자이면 출력
		printf("알파벳 소문자입니다");
	else
		printf("숫자도 알파벳 문자도 아닙니다"); //어느것에도 해당이 안되면 출력

	return 0;
}
