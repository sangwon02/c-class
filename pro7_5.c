#include <stdio.h>
//프로그램 7-8

int main_7_5()
{
    char university[11], std_no[9], name[10]; // 문자열을 저장할 배열
    int i, j;

    //사용자의 정보를 입력받기
    printf("학교명은? ");
    scanf_s("%s", university);
    rewind(stdin);
    printf("학번은? ");
    scanf_s("%s", std_no);
    rewind(stdin);
    printf("이름은? ");
    gets_s("%s", name); //빈 칸이 포함된 이름도 입력받을 수 있도록 gets를 이용

    printf("=================================\n");
    printf("%s %c%c학번 %s \n",
        university, std_no[2], std_no[3], name);

    printf("=================================\n");

    return 0;
}