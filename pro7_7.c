#include <stdio.h>
//7장 연습문제 5번

int main_7_7()
{
	int i, month, num = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
	//0월은 없으므로 0으로 해둠

	printf("1월부터 몇 월까지의 총일을 구할까요? ");
	scanf_s("%d", &month);

	for (i = 1; i <= month; i++)
	{
		num += days[i];
	}
	printf("1월부터 %d월까지는 총 %d일이 있습니다.\n", month, num);

	return 0;
}