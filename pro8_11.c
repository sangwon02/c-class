#include <stdio.h>
//���� 3��

int vowel(char* c);//�Լ�����

int main_8_11(void)
{
    char a[300] = { 0 }; //�迭 ����
    int num;
    printf("���ڸ� �Է��ϼ���: ");
    fgets(a, sizeof(a),stdin);//���ڿ� �Է� ����

    num = vowel(a);

    printf("%d\n", num);

    return 0;
}
int vowel(char* c) //������ ���ڸ� ���ִ� �Լ�
{
    int num1 = 0;

    for (int i = 0; c[i] != NULL; i++) 
        //�迭 �ȿ� �ִ� ���ڼ���ŭ �ݺ�
    {
        if (c[i] == 'a')
            num1++;
        else if (c[i] == 'e')
            num1++;
        else if (c[i] == 'i')
            num1++;
        else if (c[i] == 'o')
            num1++;
        else if (c[i] == 'u')
            num1++;
        else if (c[i] == 'A')
            num1++;
        else if (c[i] == 'E')
            num1++;
        else if (c[i] == 'I')
            num1++;
        else if (c[i] == 'O')
            num1++;
        else if (c[i] == 'U')
            num1++;
        else
            continue;
    }
    return num1;
}
