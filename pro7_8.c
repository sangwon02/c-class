#include <stdio.h>
//7장 연습문제 6번

int main_7_8()
{
	int i, num = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("12달 중 30일까지 있는 달은");
	for (i = 1; i <= 12; i++)
	{
		if (days[i] == 30)
		{
			printf("%3d,", i);
			num++;
		}
	}
	printf("\b 총 %d달입니다. \n", num);

	return 0;
}