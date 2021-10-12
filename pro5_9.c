#include <stdio.h> 

int main_5_9()
{
    //5장 연습문제 19번
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 2; j <= 9; j++) //j * i 출력
        {
            printf("%2d*%2d=%2d ", j, i, j * i);
        }
        printf("\n"); //i가 1증가한것을 다음 줄에도 생성
    }
    return 0;
}