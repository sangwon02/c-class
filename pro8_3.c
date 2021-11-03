#include <stdio.h>
#define N 5
//프로그램 9-3

int main_8_3()
{
    int i, sum;

    sum = 0;
    for (i = 0; i < N; i++)
    {
        int height;  // for의 지역변수 선언

        printf("%d번의 키는? ", i + 1);
        scanf("%d", &height);
        sum += height;

    } //for의 끝

    printf("평균키: % .1lf cm \n", (double)sum / N);


    return 0;
}