#include <stdio.h>
//���α׷� 9-8

void sum_to_10();

int global_sum;    //���� ���� ����

int main_8_8()
{
    auto int i;     //�ڵ�(����) ���� ����

    //1~10�� ���� global_sum�� ���ϱ�
    for (i = 1; i <= 10; i++)
        global_sum += i;

    printf("1~10�� �� global_sum: %d\n", global_sum);

    sum_to_10();

    return 0;
}


//1~10�� ���� ���Ͽ� ����ϴ� �Լ�
void sum_to_10()
{
    auto int i, local_sum;      //�ڵ�(����) ���� ����

    //1~10�� ���� local_sum�� ���ϱ�
    for (i = 1; i <= 10; i++)
        local_sum += i;

    printf("1~10�� �� local_sum : %d\n", local_sum);
}