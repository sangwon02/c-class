#include<stdio.h>

int main_4_7()
{
	//���α׷� 5-3
    int num;

    printf("������ �Է��Ͻÿ�");
    scanf_s("%d", &num);

    printf("�Է��� �� %d��(��)", num);

    if (num >= 0)  //num�� �����
    {
        if (num % 2 == 0)
            printf("���� ¦���Դϴ�.\n");
        else
            printf("���� Ȧ���Դϴ�.\n");
    }

    else //num�� ������
    {

        if (num % 2 == 0)
            printf("���� ¦���Դϴ�.\n");
        else
            printf("���� Ȧ���Դϴ�.\n");
    }
     return 0;
}