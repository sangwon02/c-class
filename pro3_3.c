#include <stdio.h>

int main_3_3()
{
	char lower, upper, char_num, num;

	printf("알파벳 소문자 한 개를 입력하세요.   ");
	lower = getchar();

	upper = 'A' + (lower - 'a');

	printf("입력한 소문자 %c의 대문자는 %c \n", lower, upper);

	fflush(stdin); //버퍼에 남은 개행 문자를 제거하기 위해 버퍼 전체를 비운다.
	printf("\n0-9중 한 개를 입력하세요. ");
	while(getchar()!='\n');
	scanf_s("%c", &char_num);


	num = char_num - '0';

	printf("입력한 문자 %c는 정수 %d입니다. \n", char_num, num);



	return 0;
}