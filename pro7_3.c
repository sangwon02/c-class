#include <stdio.h>
#define PERSONS 30   //���� ���� �����
#define STARS 6      //������ ��ȣ�� vote �迭�� ÷�ڸ� ��ġ��Ű�� ���� ������ ��+1
//���α׷� 7-3

int main_7_3()
{
    int survey[PERSONS] = { 1, 3, 2, 5, 3, 2, 1, 2, 3, 4, 5, 2, 3, 3, 2,
                            1, 4, 5, 2, 3, 5, 1, 3, 4, 2, 3, 1, 4, 2, 3 };
    int vote[STARS] = { 0 };
    int i;

    for (i = 0; i < PERSONS; i++)
    {
        vote[survey[i]]++;//�����ڰ� ���� ������ ��ǥ���� 1 ����
    }


    printf("������ ��ǥ�� \n");
    printf("============== \n");
    for (i = 1; i < STARS; i++)//vote[0]���� �ƹ��� �ڷᵵ ����Ǿ� ���� �ʴ�.
        printf("  %d��    %dǥ \n", i, vote[i]);


    return 0;
}