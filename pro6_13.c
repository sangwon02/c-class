#include <stdio.h>
#include <conio.h> //getch �Լ��� ���� ��� ����
#include <stdlib.h>   // system �Լ��� ���� ��� ����
//���� 3��
void Max(int, int, int); //Max�Լ� ����
void Min(int, int, int); //Min�Լ� ����
void Up(int, int, int); //up �Լ� ����
void Down(int, int, int); //Down�Լ� ����

int main_6_13()
{
    int answer, num1, num2, num3;   // ����ڰ� ������ �޴� ��ȣ, ���� ���� ����  


    do {
        printf("==============�޴�=============\n");
        printf("1. 3���� ���� �Է�\n");
        printf("2. �ּҰ� ���\n");
        printf("3. �ִ밪 ���\n");
        printf("4. ������������ �����Ͽ� ���\n");
        printf("5. ������������ �����Ͽ� ���\n");
        printf("999. �׸��α�\n");
        printf("===============================\n");
        printf("�޴� ��ȣ�� �Է��ϼ���:");
        scanf_s("%d", &answer);

        if (answer == 1 || answer == 2 || answer == 3 || answer == 4 || answer == 5 || answer == 999)
        {

            switch (answer)
            {
            case 1:
                printf("���� 3���� �Է��ϼ���. : ");
                scanf_s("%d %d %d", &num1, &num2, &num3);
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n", num1, num2, num3);
                break;

            case 2:
                Min(num1, num2, num3);
                break;
            case 3:
                Max(num1, num2, num3);
                break;
            case 4:
                Up(num1, num2, num3);
                break;
            case 5:
                Down(num1, num2, num3);
                break;
            case 999:
                printf("���α׷��� �����ϴ�. \n");
                exit(0);
            }
        }
        printf("\n>>�ƹ�Ű�� ��������.(�ٽ� ���۵˴ϴ�.)");
        _getch();
        system("cls");      // ���� ȭ���� ���� �����
    } while (answer != 999);
}

void Min(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
        return printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n���� ���� ���� %d �Դϴ�. \n", num1, num2, num3, num1);


    else if (num2 < num1 && num2 < num3)
        return printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n���� ���� ���� %d �Դϴ�. \n", num1, num2, num3, num2);


    else
        return printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n���� ���� ���� %d �Դϴ�. \n", num1, num2, num3, num3);
}
void Max(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n���� ū ���� %d �Դϴ�. \n", num1, num2, num3, num1);


    else if (num2 > num1 && num2 > num3)
        return printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n���� ū ���� %d �Դϴ�. \n", num1, num2, num3, num2);


    else
        return printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n���� ū ���� %d �Դϴ�. \n", num1, num2, num3, num3);
}
void Up(int num1, int num2, int num3)
{
    if (num1 > num2)//���� (num1>num2)
    {
        if (num1 > num3)
        {

            if (num2 > num3)
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num1, num2, num3);
            }
            else//�ƴ� ��
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num1, num3, num2);
            }
        }
        else//�ƴ� ��
        {
            printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num3, num1, num2);
        }
    }
    else//(num1>num2)�ƴ� �� (b>=a)
    {
        if (num2 > num3)
        {
            if (num1 > num3)
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num2, num1, num3);
            }
            else//�ƴ� ��
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num2, num3, num1);
            }
        }
        else//�ƴ� ��
        {
            printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num3, num2, num1);
        }
    }
    return 0;
}
void Down(int num1, int num2, int num3)
{
    if (num1 > num2)//����
    {
        if (num1 > num3)//����
        {

            if (num2 > num3)//����
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num3, num2, num1);
            }
            else//�ƴ� ��
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num2, num3, num1);
            }
        }
        else//�ƴ� ��
        {
            printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num2, num1, num3);
        }
    }
    else//(num1>num2)�ƴ� �� (num2>=num1)
    {
        if (num2 > num3)
        {
            if (num1 > num3)
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num3, num1, num2);
            }
            else//�ƴ� ��
            {
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num1, num3, num2);
            }
        }
        else//�ƴ� ��
        {
            printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n ������������ ������ ����Դϴ�.\n%d %d %d\n", num1, num2, num3, num1, num2, num3);
        }
    }
    return 0;
}