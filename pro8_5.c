#include <stdio.h>
//���α׷� 9-5


int find_larger();  //�Լ��� ���� ����

int n1, n2, max;  //���� ���� ����

int main_8_5()
{
    printf("ù° ������? "); 
    scanf("%d", &n1);
    printf("��° ������? "); 
    scanf("%d", &n2);

    // find_larger �Լ��� ȣ���� ��ȯ�� ���� ����
    max = find_larger();

    printf("n1=%d, n2=%d �� ū ���� %d \n", n1, n2, max);

    return 0;
}

//�������� n1,n2 �� ū ���� ��ȯ�ϴ� find_larger�Լ�
int find_larger()
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}