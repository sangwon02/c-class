#include <stdio.h>

int main_5_1()
{
    //���α׷� 5-22

    int i, n, sum;

    while (1) // ���ѷ���
    {
        printf("���� n�� �Է�(����:-1) : ");
        scanf_s("%d", &n);

        if (n == -1)  //n��-1�� ������������.
            break;

        sum = 0;
        for (i = 1; i <= n; i++)
            sum += i;   //i�� n�� �ɶ����� ��� ����

        printf("���� 1���� %d������ ���� %d�Դϴ�.\n\n", n, sum);
    }

    printf("���α׷��� �����ϴ�. \n");

    return 0;
}