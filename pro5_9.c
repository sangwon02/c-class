#include <stdio.h> 

int main_5_9()
{
    //5�� �������� 19��
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 2; j <= 9; j++) //j * i ���
        {
            printf("%2d*%2d=%2d ", j, i, j * i);
        }
        printf("\n"); //i�� 1�����Ѱ��� ���� �ٿ��� ����
    }
    return 0;
}