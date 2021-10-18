#include <stdio.h>
#include <conio.h> //getch �Լ��� ���� ��� ����
#include <stdlib.h>   // system �Լ��� ���� ��� ����
void Max(int, int, int); //Max�Լ� ����
void Min(int, int, int); //Min�Լ� ����
void Up(int, int, int); //Climbing�Լ� ����
void Down(int, int, int); //Descending�Լ� ����

int main()
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
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n", num1, num2, num3);
                printf("3���� ������ �Է��ϼ���.:");
                scanf_s("%d %d %d", &num1, &num2, &num3);
            
                break;
            case 2:  
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n", num1, num2, num3);
                printf("���� ���� �� �Դϴ�. \n");
                Min(num1, num2, num3);
                break;
            case 3: 
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n", num1, num2, num3);
                printf("���� ū �� �Դϴ�. \n");
                Max(num1, num2, num3);
                break;
            case 4: 
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n", num1, num2, num3);
                printf("������������ ������ ����Դϴ�.\n");
                Up(num1, num2, num3);
                break;
            case 5: 
                printf("�Է��Ͻ� 3���� ������ ��: %d %d %d\n", num1, num2, num3);
                printf("������������ �����Ѱ�� �Դϴ�.\n");
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
void Max(int a, int b, int c) {
    if (a > b && a > c)
        return printf("%d", a);


    else if (b > a && b > c)
        return printf("%d", b);


    else
        return printf("%d", c);


}
void Min(int a, int b, int c) 
{
    if (a < b && a < c)
        return printf("%d", a);


    else if (b < a && b < c)
        return printf("%d", b);


    else
        return printf("%d", c);
}

void Up(int a, int b, int c)
{
    if (a > b)//���� (a>b)
    {
        if (a > c)//���� (a>c)
        {

            if (b > c)//���� (b>c)
            {
                printf("%d %d %d\n", a, b, c);//a,b,c
            }
            else//�ƴ� ��
            {
                printf("%d %d %d\n", a, c, b);//a,c,b
            }
        }
        else//�ƴ� ��
        {
            printf("%d %d %d\n", c, a, b);//c,a,b
        }
    }
    else//(a>b)�ƴ� �� (b>=a)
    {
        if (b > c)//���� (b>c)
        {
            if (a > c)//����(a>c)
            {
                printf("%d %d %d\n", b, a, c);//b, a, c
            }
            else//�ƴ� ��
            {
                printf("%d %d %d\n", b, c, a);//b, c, a
            }
        }
        else//�ƴ� ��
        {
            printf("%d %d %d\n", c, b, a);//c, b,a
        }
    }
    return 0;
}
void Down(int a, int b, int c)
{
    if (a > b)//���� (a>b)
    {
        if (a > c)//���� (a>c)
        {

            if (b > c)//���� (b>c)
            {
                printf("%d %d %d\n", c, b, a);
            }
            else//�ƴ� ��
            {
                printf("%d %d %d\n", b, c, a);
            }
        }
        else//�ƴ� ��
        {
            printf("%d %d %d\n", b, a, c);
        }
    }
    else//(a>b)�ƴ� �� (b>=a)
    {
        if (b > c)//���� (b>c)
        {
            if (a > c)//����(a>c)
            {
                printf("%d %d %d\n", c, a, b);
            }
            else//�ƴ� ��
            {
                printf("%d %d %d\n", a, c, b);
            }
        }
        else//�ƴ� ��
        {
            printf("%d %d %d\n", a, b, c);
        }
    }
    return 0;
}