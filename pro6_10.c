#include <stdio.h>
int convert(int second);
//연습문제 3번

int main_6_10()
{
	int second;   // 초
	int hour;
	second = 5000;
	hour = convert(second); // 초를 시간으로 변환하기   printf("%d초는 %d시간", second, hour);

	return 0;
}

int convert(int second)
{
	second = second / 60; // 분 단위로 변환
	second = second / 60; // 시간 단위로 변환
	return second;
}