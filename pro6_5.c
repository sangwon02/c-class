
#include <stdio.h>
#include <math.h>      // sin 함수를 위한 헤더 파일
#define PI 3.141592
//프로그램 8-5

// 함수의 원형 선언
double get_sin(double degree);


// main 함수 정의
int main_6_5()
{
    int degree;      // 각도값을 저장할 변수

    for (degree = 0; degree <= 180; degree += 30)
        printf("sin(%d˚) = %.5lf \n", degree, get_sin(degree));


    printf("===============================\n");


    printf("sin 함수값을 구할 각도는? ");
    scanf_s("%d", &degree);
    printf("sin(%d˚) = %.5lf \n", degree, get_sin(degree));

    return 0;
}

// 각도 단위의 인수를 전달받아 사인 삼각함수 값을 반환하는 함수
double get_sin(double degree)
{
    double radian;

    radian = (PI * degree) / 180;// 각도 단위의 degree를 라디안 단위로 변환

    return sin(radian);
}