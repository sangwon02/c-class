#include<stdio.h>

int main_4_20()
{
	//���α׷� 5-16
    int i;
    double area = 100, target = 1;   //���� �簢���� ����, ���� ����

    for (i = 1; ; i++)
    {
        area = area / 2;
        printf("%2d�� ������ ���� ���� : %6.2lf \n", i, area);
        if (area < target)// ���̰� 1���� ������ ����
            break;
    }

	return 0;
}