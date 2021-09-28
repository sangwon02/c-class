#include<stdio.h>

int main_4_16()
{
	//프로그램 5-12
    int n, i, sum;

    for (n = 1; n <= 10; n++)
    {
        sum = 0;
        for (i = 1; i <= n; i++)
            sum = sum + i;

        printf("1~%d까지의 합:%d \n", n, sum);
    }


	return 0;
}