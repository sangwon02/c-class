#include <stdio.h>
//프로그램 10-10

int main_9_10()
{
	char* first = "GilDong", * last = "Hong"; //이름과 성
	char* temp; //문자열 주소를 임시로 저장할 포인터 변수

	printf("Name: %s %s\n", first, last);

	//포인터 변수에 저장된 두 주소를 교환해 두 포인터가 가리키는 문자열 교환
	temp = first;
	first = last;
	last = temp;

	printf("Name: %s %s\n", first, last);

	return 0;
}
