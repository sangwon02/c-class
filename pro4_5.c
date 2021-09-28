#include<stdio.h>

int main_4_5()
{
	//프로그램 5-1
	int temp;

	printf("현재 온도는?");
	scanf_s("%d", &temp); // temp에 온도 입력받기

	if (temp < 0)
		printf("오늘은 영하이며");

	printf("현재 온도는 %d정도입니다.\n", temp);

	return 0;
}