#include <stdio.h>
//���α׷� 8-9

// �Լ��� ���� ����
void print_header();
void print_numbers(int end);

// main �Լ� ���� 
int main_6_9()
{
    int year = 2015, month = 2, days = 28; // ����, ��, �� ��

    printf("\n\t\t%d�� %d�� �޷� \n", year, month);
    print_header();
    print_numbers(days);

    return 0;
}


// �޷��� ��¥�� ����ϱ� ���� ������ ���
void print_header()
{
    printf("\n\t===================================================\n");
    printf("\t��\t��\tȭ\t��\t��\t��\t��");
    printf("\n\t===================================================\n");
}

// �޷��� ��¥�� �� �־� ���
void print_numbers(int end)
{
    int day_num;

    for (day_num = 1; day_num <= end; day_num++)
    {
        printf("\t%2d", day_num);
        if (day_num % 7 == 0) // 7���� ���� ������ ���� �ٲٱ�                
            printf("\n");
    }
    printf("\n");
}