#include <stdio.h>
#define SIZE 5  //5�� ��ũ�� ��� SIZE�� ���� 
//���α׷� 7-1

int main_7_1()
{
    int quiz[SIZE]; //���� SIZE���� ������ �迭
    int i, count, sum;
    double avg;

    //�迭�� �Է�
    printf("%d���� ������ ������� �Է��ϼ���.\n\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d���� ���� ������? ", i + 1);
        scanf("%d", &quiz[i]);
    }
    //�迭 ��� ���ϱ�
    sum = 0;
    for (i = 0; i < SIZE; i++)
        sum = sum + quiz[i];

    avg = (double)sum / SIZE;


    //��� �̸��� ��
    count = 0;
    for (i = 0; i < SIZE; i++)
        if (quiz[i] < avg)
            count++;
    //��� ���
    printf("============================\n");
    printf("  ��ȣ ����  ��հ��� ����  \n");
    printf("============================\n");
    for (i = 0; i < SIZE; i++)
        printf("   %2d   %2d      %5.1lf\n", i + 1, quiz[i], quiz[i] - avg);
    printf("============================\n");
    printf("��� : %.1lf�� \n", avg);
    printf("============================\n");
    printf("��չ̸� : %d�� \n", count);

    return 0;
}