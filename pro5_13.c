#include <stdio.h>

int main_5_13()
{
    //5�忬������ 22-4��

    int i, j;
    for (i = 9; i >= 1; i--)  //9�� i�� 1�� �ɶ����� �ݺ�
    {

        for (j = 1; j <= i; j++)//j�� 1�� Ŀ���� i���� j�� ���ʴ�� ���
        {
            printf("%d", j);
        }
        printf("\n");

    }
    return 0;
}