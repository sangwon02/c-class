#include <stdio.h>

int main_2_2()
{

    char a;
    printf("아스키 코드로 바꿀 문자 : ");
    scanf_s("%c", &a);
    printf("입력한 문자 :%c \n그 문자의 아스키코드 : %d \n ", a, a);

    return 0;
}