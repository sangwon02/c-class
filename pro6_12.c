#include <stdio.h>
//�������� 5��

double difference(double height, double weight);

int main_6_12()
{
    double height, weight;
    double dif, std_weight;

    //���� �Է�
    printf("\nŰ��?");
    scanf_s("%lf", &height);
    printf("ü����?");
    scanf_s("%lf", &weight);

    // ǥ��ü�߰��� ���̸� ���ϴ� �Լ� ����
    dif = difference(height, weight);

    //dif�� ���� ���� ǥ��ü�߿� ���� ���� ���
    if (dif < 0)
        printf("���� %.1lfKg �ʰ�\n", -dif);
    else if (dif > 0)
        printf("���� %.1lfKg �̸�\n", dif);
    else
        printf("�� ����\n");

    return 0;
}

double difference(double height, double weight)
{
    double standard, value;
    standard = (height - 100) * 0.9;
    printf("\n\nŰ�� %.1lf�� ����� ǥ�� ü�� %.1lfKg", height, standard);
    value = standard - weight;


    if ((-0.1 < value) && (value < 0.1)) //�������� ���̰� 0.1�̸��̸� �����̶�� ����϶�� ��
        return 0;
    else
        return value;
}