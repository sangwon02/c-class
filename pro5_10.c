#include <stdio.h>

int main_5_10()
{
    //5�忬������ 22-1��
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        if ((i == 1) || (i == 9)) //i�� 1��9�϶� ��� ����
        {
            for (j = 1; j <= 9; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else //�ƴҶ� ����� �ֵ��� ����
        {
            for (j = 1; j <= 9; j++)
            {
                if ((j == 1) || (j == 9))//1,9��°���� ������
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }


    return 0;
}