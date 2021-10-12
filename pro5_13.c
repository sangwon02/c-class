#include <stdio.h>

int main_5_13()
{
    //5장연습문제 22-4번

    int i, j;
    for (i = 9; i >= 1; i--)  //9인 i가 1이 될때까지 반복
    {

        for (j = 1; j <= i; j++)//j가 1씩 커지며 i까지 j를 차례대로 출력
        {
            printf("%d", j);
        }
        printf("\n");

    }
    return 0;
}