#include <stdio.h>

int main_5_2()
{
    //���α׷� 5-23

    int i, n, sum = 0;

    printf("���� n�� �Է� : ");
    scanf_s("%d", &n);

    i = 0;
    while (i <= n)
    {
        i++;
        if (i % 2 == 1)//Ȧ���̸� �ٽ� ���� �ö󰣴�
            continue; 

        sum += i;//¦���̸� ���Ѵ�
    }

    printf("���� 1���� %d ���� ¦������ ���� %d�Դϴ�.\n", n, sum);

    return 0;

}