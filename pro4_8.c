#include<stdio.h>

int main_4_8()
{
	//���α׷� 5-4
    int score; //������ ������ ����
    char grade; //������ �ش��ϴ� ���� 1���� ������ ����

    printf("������ �Է��Ͻÿ�:");
    scanf_s("%d", &score);

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("����:%c\n", grade);



	return 0;
}