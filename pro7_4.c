#include <stdio.h>
#define M 2    //����� �� ������ ��ũ�� ����� ����
#define N 3   //����� �� ������ ��ũ�� ����� ���� 
//���α׷� 7-7

int main_7_4()
{
    int A[M][N], B[M][N], C[M][N];//M��N ����� ������ �迭 �� �� ����
    int i, j;

    //��� A �Է�
    printf("\n��� A �Է� \n");
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
            printf("%d�� %d��? ", i + 1, j + 1);
            scanf_s("%d", &A[i][j]);
        }

    //��� B �Է�
    printf("\n��� B �Է� \n");
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
            printf("%d�� %d��? ", i + 1, j + 1);
            scanf_s("%d", &B[i][j]);
        }

    //�� ����� ���� �迭 C�� ���ϱ�
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];

    //��� A ��� 
    printf("\n ��� A\n");
    for (i = 0; i < M; i++)
    {
        printf(" [ ");
        for (j = 0; j < N; j++)
            printf("%2d ", A[i][j]);
        printf("] \n");
    }

    //��� B ���   
    printf("\n ��� B\n");
    for (i = 0; i < M; i++)
    {
        printf(" [ ");
        for (j = 0; j < N; j++)
            printf("%2d ", B[i][j]);
        printf("] \n");
    }

    //��� C ��� 
    printf("\n ��� C=A+B \n");
    for (i = 0; i < M; i++)
    {
        printf(" [ ");
        for (j = 0; j < N; j++)
            printf("%2d ", C[i][j]);
        printf("] \n");
    }

    return 0;
}