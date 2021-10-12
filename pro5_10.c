#include <stdio.h>

int main_5_10()
{
    //5장연습문제 22-1번
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        if ((i == 1) || (i == 9)) //i가 1과9일땐 길게 생성
        {
            for (j = 1; j <= 9; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else //아닐땐 빈곳이 있도록 생성
        {
            for (j = 1; j <= 9; j++)
            {
                if ((j == 1) || (j == 9))//1,9번째에만 별생성
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }


    return 0;
}