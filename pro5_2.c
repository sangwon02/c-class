#include <stdio.h>

int main_5_2()
{
    //프로그램 5-23

    int i, n, sum = 0;

    printf("정수 n을 입력 : ");
    scanf_s("%d", &n);

    i = 0;
    while (i <= n)
    {
        i++;
        if (i % 2 == 1)//홀수이면 다시 위로 올라간다
            continue; 

        sum += i;//짝수이면 더한다
    }

    printf("정수 1에서 %d 이하 짝수들의 합은 %d입니다.\n", n, sum);

    return 0;

}