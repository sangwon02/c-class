#include <stdio.h>  
#include <math.h>      // sin �Լ��� ���� ��� ����
#define PI 3.141592
//���α׷� 8-1

int main_6_1()
{
    
    int degree;         // ���� ���� ������ ����
    double radian;      // degree�� ���� ���� ������ ����

    for (degree = 0; degree <= 180; degree += 30)
    {
        radian = (PI * degree) / 180; // ������ ���� ������ ��ȯ   
        printf("sin(%d��) = %.5lf \n", degree, sin(radian));
    }

    return 0;
}