#include <stdio.h>
//���α׷� 7-8

int main_7_5()
{
    char university[11], std_no[9], name[10]; // ���ڿ��� ������ �迭
    int i, j;

    //������� ������ �Է¹ޱ�
    printf("�б�����? ");
    scanf_s("%s", university);
    rewind(stdin);
    printf("�й���? ");
    scanf_s("%s", std_no);
    rewind(stdin);
    printf("�̸���? ");
    gets_s("%s", name); //�� ĭ�� ���Ե� �̸��� �Է¹��� �� �ֵ��� gets�� �̿�

    printf("=================================\n");
    printf("%s %c%c�й� %s \n",
        university, std_no[2], std_no[3], name);

    printf("=================================\n");

    return 0;
}