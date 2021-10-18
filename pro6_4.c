#include <stdio.h>
//프로그램 8-4

// find_larger 함수의 원형
int find_larger(int first, int second);

int main_6_4()
{
    int n1, n2, max;

    printf("첫째 정수? "); scanf_s("%d", &n1);
    printf("둘째 정수? "); scanf_s("%d", &n2);


    // find_larger 함수 호출 후 반환된 값을 max에 저장
    max = find_larger(n1, n2);
    printf("%d, %d 중 큰 값은 %d \n", n1, n2, max);


    return 0;
}

// find_larger 함수의 정의
int find_larger(int first, int second)
{
    if (first > second)
        return first;
    else
        return second;
}