#include<stdio.h>

int main_4_23()
{
	//���α׷� 5-19
    char start, ch;

    for (start = 'z'; start >= 'a'; start--)
    {
        //�� �� ���� �κ��� ���ӵ� �� ĭ ���
        for (ch = 'a'; ch < start; ch++)
            printf(" ");

        //���ĺ��� start���� 'z'���� ���
        for (ch = start; ch <= 'z'; ch++)
            printf("%c", ch);

        printf("\n");
    }


	return 0;
}