#include <stdio.h>

int main_2_7()
{
	//변수 선언
	int std_no, kor, world, math;
	double avg;

	//대입문을 사용해 변수 값 저장하기
	std_no = 2013901;
	kor = 89;
	world = 100;
	math = 95;

	//세과목 평균 구하기
	avg = (kor + world + math) / 3.0;

	//결과를 형식에 맞춰보기좋게 정리
	printf("%-6s :%d \n", "학번", std_no);
	printf("==============================\n");
	printf("%-6s :%4d(점) \n", "국어", kor);
	printf("%-6s :%4d(점) \n", "세계사", world);
	printf("%-6s :%4d(점) \n", "수학", math);
	printf("==============================\n");
	printf("%-6s :%7.2lf \n", "평균", avg);


	return 0;
}