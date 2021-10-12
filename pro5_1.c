#include <stdio.h>

int main_5_1()
{
    //프로그램 5-22

    int i, n, sum;

    while (1) // 무한루프
    {
        printf("정수 n을 입력(종료:-1) : ");
        scanf_s("%d", &n);

        if (n == -1)  //n이-1면 루프를나간다.
            break;

        sum = 0;
        for (i = 1; i <= n; i++)
            sum += i;   //i가 n이 될때까지 계속 더함

        printf("정수 1에서 %d까지의 합은 %d입니다.\n\n", n, sum);
    }

    printf("프로그램을 끝냅니다. \n");

    return 0;
}