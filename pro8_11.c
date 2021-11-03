#include <stdio.h>
//과제 3번

int vowel(char* c);//함수선언

int main_8_11(void)
{
    char a[300] = { 0 }; //배열 생성
    int num;
    printf("문자를 입력하세요: ");
    fgets(a, sizeof(a),stdin);//문자열 입력 받음

    num = vowel(a);

    printf("%d\n", num);

    return 0;
}
int vowel(char* c) //모음의 숫자를 세주는 함수
{
    int num1 = 0;

    for (int i = 0; c[i] != NULL; i++) 
        //배열 안에 있는 문자수만큼 반복
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
