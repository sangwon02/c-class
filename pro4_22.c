#include<stdio.h>

int main_4_22()
{
	//���α׷� 5-18
    int die1, die2;
    int cnt;

    cnt = 0;

    printf("   =============== \n");
    printf("   �ֻ���1 �ֻ���2 \n");
    printf("   =============== \n");

    //���ֻ����� ���� 7�� �Ǵ� ����� �� ���
    for (die1 = 1; die1 <= 6; die1++)
    {
        for (die2 = 1; die2 <= 6; die2++)
        {
            if (die1 + die2 == 7)
            {
                printf("\t%d\t%d\n", die1, die2);
                cnt++;
                //���ֻ����� ���� 7�� �Ǵ� ����� �� ���
            }
        }
    }

    printf("   =============== \n");
    printf("\t��%d����\n", cnt);


	return 0;
}