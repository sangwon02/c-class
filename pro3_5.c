#include <stdio.h>

int main_3_5()
{
	printf("(참 && 참)의 결과는 %d입니다.\n", 100 == 100 && 100 != 10);
	printf("(참 && 거짓)의 결과는 %d입니다.\n", 100 == 100 && 100 != 100);
	printf("(참 || 참)의 결과는 %d입니다.\n", 100 == 100 || 100 == 10);
	printf("(거짓 || 거짓)의 결과는 %d입니다.\n", 100 != 100 || 100 == 10);
	printf("(!참)의 결과는 %d입니다.\n", !(100 == 100));
	printf("(!거짓)의 결과는 %d입니다.\n", !(100 != 100));


	return 0;
}