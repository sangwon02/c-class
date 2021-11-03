#include <stdio.h>
//프로그램 9-5


int find_larger();  //함수의 원형 선언

int n1, n2, max;  //전역 변수 선언

int main_8_5()
{
    printf("첫째 정수는? "); 
    scanf("%d", &n1);
    printf("둘째 정수는? "); 
    scanf("%d", &n2);

    // find_larger 함수의 호출후 반환된 값을 저장
    max = find_larger();

    printf("n1=%d, n2=%d 중 큰 값은 %d \n", n1, n2, max);

    return 0;
}

//전역변수 n1,n2 중 큰 값을 반환하는 find_larger함수
int find_larger()
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}