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

    //10���� ���� ������ �Է¹޾� sum�� �����ϰ� ����ڿ� Ż���ڼ�
    for (i = 1; i <= 10; i++)
    {
        printf("%d���� ���� ������?", i);
        scanf_s("%d", &quiz);  

        //����� ���ϱ� ���� ������ sum�� ����
        sum += quiz;

        if (quiz >= 70)
            pass++;  
        else
            fail++;   
    }

    //for������ ���� sum���κ��� ��� ���ϱ�
    avg = (double)sum / 10;

    printf("========================\n");
    printf("���:%.2lf��\n", avg);
    printf("�����:%.2d��\n", pass);
    printf("Ż����:%.2d��\n", fail);

	return 0;
}