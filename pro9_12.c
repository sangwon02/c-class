#include <stdio.h>
#include <ctype.h>	 //toupper와 tolower 함수를 위한 헤더 파일
#include <string.h>	//strlen 함수를 위한 헤더 파일
//프로그램 10-12

int main_9_12()
{
	char s[100], * p;	//문자열을 저장할 배열, 문자열을 가리킬 포인터
	int i;
	printf("문자열을 입력하시오 : ");
	gets(s);//문자열 전용 입력 함수 gets를 이용해 s에 문자열 입력

	//문자열을 대문자로 변환
	p = s;	//p가 s 배열, 즉 방금 입력된 문자열을 가리키게 함
	while (*p != '\0')	//p가 가리키는 문자가 널문자가 아니면 계속 변환
	{
		*p = toupper(*p);	//p가 가리키는 곳의 문자를 소문자로 변경
		p++;	//p가 다음 문자를 가리키도록 포인터를 1 증가
	}
	printf("대문자로 변환한 결과: %s\n", s);

	//문자열을 다시 소문자로 변경하기(배열명[첨자] 이용)

	//s에 저장된 문자열의 길이
	for (i = 0; i < strlen(s); i++)
	{
		s[i] = tolower(s[i]);//s[i]에 저장된 문자를 소문자로 변경
	}
	printf("소문자로 변환한 결과: %s\n", s);

	return 0;
}

