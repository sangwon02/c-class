#include <stdio.h>
//���α׷� 9-7

int find_larger(int first, int second); //�Լ� ���� ����

int n1, n2, max;   //���� ���� ����

int main_8_7()
{
    int width, height;    //main�� ���� ����

    printf("ù° ����? "); 
    scanf("%d", &n1);
    printf("��° ����? "); 
    scanf("%d", &n2);

    //���� ���� n1�� n2�� ū ���� ���Ͽ� max�� �����ϱ�
    max = find_larger(n1, n2);
    printf("n1=%d, n2=%d �� ū���� %d \n", n1, n2, max);

    //main��  width�� height�� ū ���� ���Ͽ� max�� �����ϱ�
    width = n1 * 4;
    height = n2;
    max = find_larger(width, height);
    printf("width=%d, height=%d �� ū ���� %d\n", width, height, max);

    return 0;
}

//�Ű����� first�� second�� ���޵� �� ���� �� ū���� ��ȯ�ϴ� �Լ�
int find_larger(int first, int second)
{
    if (first > second)
        return first;
    else
        return second;
}