#include <stdio.h>
//���α׷� 8-4

// find_larger �Լ��� ����
int find_larger(int first, int second);

int main_6_4()
{
    int n1, n2, max;

    printf("ù° ����? "); scanf_s("%d", &n1);
    printf("��° ����? "); scanf_s("%d", &n2);


    // find_larger �Լ� ȣ�� �� ��ȯ�� ���� max�� ����
    max = find_larger(n1, n2);
    printf("%d, %d �� ū ���� %d \n", n1, n2, max);


    return 0;
}

// find_larger �Լ��� ����
int find_larger(int first, int second)
{
    if (first > second)
        return first;
    else
        return second;
}