#include <stdio.h>
#define N 5
//���α׷� 9-2
double compute_ave(int ary[N]);

int main_8_2()
{
    int i;
    int pass = 0, sum = 0;   //�հ��� ��, �հ��� ������ ��
    int score[N] = { 93, 82, 49, 55, 75 };   //����


    //��ü�� ��� ���ϱ�
    printf("��ü�� ���: %.1lf \n", compute_ave(score));

    //60�� �̻� �հ���
    for (i = 0; i < N; i++)
    {
        if (score[i] >= 60)
        {
            sum += score[i]; //60�� �̻��� ���� sum�� ���� ����    
            pass++;     //60�� �̻��� �л��� ���� 1 ����
        }
    }
    printf("�հ����� ���: %.1lf \n", (double)sum / pass);

    return 0;
}

//�迭�� ����� ���ϴ� �Լ�
double compute_ave(int ary[N])
{
    int i, sum = 0;

    for (i = 0; i < N; i++)
        sum += ary[i];

    return (double)sum / N;
}