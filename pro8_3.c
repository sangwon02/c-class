#include <stdio.h>
#define N 5
//���α׷� 9-3

int main_8_3()
{
    int i, sum;

    sum = 0;
    for (i = 0; i < N; i++)
    {
        int height;  // for�� �������� ����

        printf("%d���� Ű��? ", i + 1);
        scanf("%d", &height);
        sum += height;

    } //for�� ��

    printf("���Ű: % .1lf cm \n", (double)sum / N);


    return 0;
}