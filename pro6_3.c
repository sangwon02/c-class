#include <stdio.h>
//���α׷� 8-3

// ���� �� ���� ���޹޾� ū ���� ��ȯ�ϴ� find_larger �Լ�
int find_larger(int first, int second)
{
    int larger;

    if (first > second)
        larger = first;
    else
        larger = second;

    return larger;
}

int main_6_3()
{
    int n1, n2, max;

    printf("ù° ����? "); scanf_s("%d", &n1);
    printf("��° ����? "); scanf_s("%d", &n2);

    // find_larger �Լ��� ȣ�� �� ��ȯ�� ���� max�� ����
    max = find_larger(n1, n2);

    printf("%d, %d �� ū ���� %d \n", n1, n2, max);

    return 0;
}