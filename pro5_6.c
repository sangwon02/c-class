#include <stdio.h>

int main_5_6()
{
	//4_15 반복문 변경 
	char ch;

	printf("문자입력:");
	scanf_s("%c", &ch);  

	for (int i = 7; i >= 0; i--) //7부터 1씩 줄어들게 8번 반복
	{
		printf("%2d", ch & (1 << i) ? 1 : 0);
	}
	
	return 0;
}