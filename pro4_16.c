#include<stdio.h>

int main_4_16()
{
	//프로그램 5-12
    int n, i, sum;

    for (n = 1; n <= 10; n++)
    {
        sum = 0;
        for (i = 1; i <= n; i++)//sum이 늘어남에 따라서 sum의 숫자까지 1부터더함
            sum = sum + i;

        printf("1~%d까지의 합:%d \n", n, sum);
    }


	return 0;
}