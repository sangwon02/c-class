#include<stdio.h>

int main_4_13()
{
	//���α׷� 5-9
    int score;
    char grade;

    printf("������ �Է��Ͻÿ�. : ");
    scanf_s("%d", &score);

    switch (score / 10)
    {
    case 10:
    case 9: grade = 'A'; break;
    case 8: grade = 'B'; break;
    case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    default: grade = 'F';
    }
    printf("���� : %c\n", grade);

	return 0;
}