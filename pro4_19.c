#include<stdio.h>

int main_4_19()
{
	//���α׷� 5-15
    int i, quiz, sum, pass, fail;
    double avg;

    //������ ������ 0���� �ʱ�ȭ
    sum = 0;
    pass = 0;
    fail = 0;

    //10���� ���� ������ �Է¹޾� sum�� �����ϰ� ����ڿ� Ż���ڼ� ���ϱ�
    for (i = 1; i <= 10; i++)
    {
        printf("%d���� ���� ������?", i);
        scanf("%d", &quiz);   //i�� �л��� ���� ���� �Է�

        //����� ���ϱ� ���� ������ sum�� �����ϱ�
        sum += quiz;

        if (quiz >= 70)
            pass++;   //70�� �̻��̸� ���
        else
            fail++;   //70�� �̸��̸� Ż��
    }

    //for������ ���� sum���κ��� ��� ���ϱ�
    avg = (double)sum / 10;

    //��� ���
    printf("========================\n");
    printf("���:%.2lf��\n", avg);
    printf("�����:%.2d��\n", pass);
    printf("Ż����:%.2d��\n", fail);

	return 0;
}