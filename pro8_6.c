#include <stdio.h>
//���α׷� 9-6
int find_larger();  //�Լ� ���� ����

int n1, n2, max;  //���� ���� ����

int main_8_6()
{
    int width, height; //main�� ���� ���� ����

    printf("ù° ����? ");
    scanf("%d", &n1);
    printf("��° ����? ");
    scanf("%d", &n2);

    //���� ���� n1�� n2�� ū ���� ���Ͽ� max�� �����ϱ�
    max = find_larger();
    printf("n1=%d, n2=%d �� ū���� %d \n", n1, n2, max);

    //main��  width�� height�� ū ���� ���Ͽ� max�� �����ϱ�
    width = n1 * 4;
    height = n2;
    max = find_larger();
    printf("width=%d, height=%d �� ū ���� %d \n", width, height, max);

    return 0;
}

//���� ���� n1�� n2�� ū ���� ��ȯ�ϴ� �Լ�
int find_larger()
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}