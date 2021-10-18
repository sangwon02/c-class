#include <stdio.h>
//프로그램8-8

void print_title();
void print_information(void);

int main_6_8()
{
	print_title();
	print_information();

	return 0;
}

// 보고서 제목
void print_title()
{
	printf("=============================\n");
	printf("==    C 프로그래밍 과제    ==\n");
	printf("== 사인 함수 그래프 그리기 ==\n");
	printf("=============================\n");
}

// 개인 정보
void print_information(void)
{
	printf("\n\n");
	printf("%30s \n", "대한대학교");
	printf("%30s \n", "IT학부");
	printf("%30s \n", "홍길동");
}