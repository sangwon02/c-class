#include<stdio.h>

int main_4_13()
{
	//프로그램 5-9
    int score;
    char grade;

    printf("점수를 입력하시오. : ");
    scanf_s("%d", &score);

    switch (score / 10) //점수를 10으로 나눈값의 몫별로 정리
    {
    case 10:
    case 9: grade = 'A'; break;
    case 8: grade = 'B'; break;
    case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    default: grade = 'F';
    }
    printf("학점 : %c\n", grade);

	return 0;
}