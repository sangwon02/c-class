#include <stdio.h>

int main_5_11()
{
    //5�忬������ 22-2��
    int i, j;

    for (i = 1; i <= 5; i++) //1~5�� �κ�
    {
        for (j = 4; j >= i; j--)//"   "��  ���� �پ���� ����
        {
            printf(" ");
        }

        for (j = 1; j <= i * 2 - 1; j++)   //*�� �þ���� ����
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= 4; i++) //6~9�� �κ�
    {
        for (j = 1; j <= i; j++)//"   "��  ���� �þ���� ����
        {
            printf(" ");
        }

        for (j = 1; j <= 9 - (i * 2); j++)//*�� �پ���� ����
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
