#include <stdio.h>
//���α׷� 9-9

void find_PW();
void find_ID();

int main_8_9()
{
    int service;  //����ڰ� ��û�� ���� ��ȣ ����

    do
    {
        printf("\n <<< 1.ID ã�� 2. PW ã�� 3. �����ϱ� >>> \n");
        printf(" ���ϴ� ���� ��ȣ�� �Է��ϼ���(1~3) ");
        scanf("%d", &service);

        switch (service)
        {
        case 1: find_ID(); break; //���̵� ã�����
        case 2: find_PW();  //��й�ȣ �O�����
        }
    } while (service != 3); // 3.�����ϱ⸦ �������� �ʴ��� ��� �ݺ�

    return 0;
}

//���̵� ã�� ���� �Լ�
void find_ID()
{
    static int count_ID = 0;  //find_ID�� ȣ�� ����

    count_ID++;   //find_ID  �Լ��� ȣ��� 1�� ����
    printf("\n �� %dȸ° IDã�� ��û�Դϴ�. \n", count_ID);
}

//��й�ȣ ã�� ���� �Լ�
void find_PW()
{
    int count_PW = 0; //�ڵ� ����

    count_PW++;
    printf("\n �� %dȸ° ��й�ȣ ã�� ��û�Դϴ�. \n", count_PW);
}