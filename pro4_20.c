#include<stdio.h>

int main_4_20()
{
	//프로그램 5-16
    int i;
    double area = 100, target = 1;   //현재 사각형의 면적, 최저 면적

    for (i = 1; ; i++)
    {
        area = area / 2;
        printf("%2d번 접었을 때의 넓이 : %6.2lf \n", i, area);
        if (area < target)// 넓이가 1보다 작으면 멈춤
            break;
    }

	return 0;
}