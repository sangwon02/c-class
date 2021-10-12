#include <stdio.h>

int main_5_11()
{
    //5장연습문제 22-2번
    int i, j;

    for (i = 1; i <= 5; i++) //1~5줄 부분
    {
        for (j = 4; j >= i; j--)//"   "이  점점 줄어나도록 설정
        {
            printf(" ");
        }

        for (j = 1; j <= i * 2 - 1; j++)   //*이 늘어나도록 설정
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= 4; i++) //6~9줄 부분
    {
        for (j = 1; j <= i; j++)//"   "이  점점 늘어나도록 설정
        {
            printf(" ");
        }

        for (j = 1; j <= 9 - (i * 2); j++)//*이 줄어나도록 설정
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
