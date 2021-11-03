#include <stdio.h>
#define N 5
//프로그램 9-1
int find_max(int ary[N]);

int main_8_1()
{
    int maximum, score[N] = { 10, 8, 6, 9, 8 };

    maximum = find_max(score);
    printf("최댓값: %d \n", maximum);

    return 0;
}

//전달된 배열의 최댓값 반환
int find_max(int ary[N])
{
    int i, max;

    max = ary[0];
    for (i = 0; i < N; i++)
        if (max < ary[i])  //i, max, ary의 참조영역
            max = ary[i];

    return max;
}