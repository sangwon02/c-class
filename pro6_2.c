#include <stdio.h>
//���α׷� 8-2

// compute_sum �Լ��� ����
int compute_sum(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
        sum += i;

    return sum;
}

// main �Լ��� ����
int main_6_2()
{
    int end = 200;

    printf("1~100������ ��: %d \n\n", compute_sum(100));

    printf("1���� ������� ���� ���ұ��? ");
    scanf_s("%d", &end);
    printf("\n1~%d������ ��: %d \n", end, compute_sum(end));

    return 0;
}