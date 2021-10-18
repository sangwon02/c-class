#include <stdio.h>
#include <conio.h> //getch 함수를 위한 헤더 파일
#include <stdlib.h>   // system 함수를 위한 헤더 파일
//과제 3번
void Max(int, int, int); //Max함수 선언
void Min(int, int, int); //Min함수 선언
void Up(int, int, int); //up 함수 선언
void Down(int, int, int); //Down함수 선언

int main_6_13()
{
    int answer, num1, num2, num3;   // 사용자가 선택한 메뉴 번호, 정수 저장 변수  


    do {
        printf("==============메뉴=============\n");
        printf("1. 3개의 정수 입력\n");
        printf("2. 최소값 출력\n");
        printf("3. 최대값 출력\n");
        printf("4. 오름차순으로 정렬하여 출력\n");
        printf("5. 내림차순으로 정렬하여 출력\n");
        printf("999. 그만두기\n");
        printf("===============================\n");
        printf("메뉴 번호를 입력하세요:");
        scanf_s("%d", &answer);

        if (answer == 1 || answer == 2 || answer == 3 || answer == 4 || answer == 5 || answer == 999)
        {

            switch (answer)
            {
            case 1:
                printf("정수 3개를 입력하세요. : ");
                scanf_s("%d %d %d", &num1, &num2, &num3);
                printf("입력하신 3개의 정수의 값: %d %d %d\n", num1, num2, num3);
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
                printf("프로그램을 끝냅니다. \n");
                exit(0);
            }
        }
        printf("\n>>아무키나 누르세요.(다시 시작됩니다.)");
        _getch();
        system("cls");      // 현재 화면의 내용 지우기
    } while (answer != 999);
}

void Min(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
        return printf("입력하신 3개의 정수의 값: %d %d %d\n가장 작은 수는 %d 입니다. \n", num1, num2, num3, num1);


    else if (num2 < num1 && num2 < num3)
        return printf("입력하신 3개의 정수의 값: %d %d %d\n가장 작은 수는 %d 입니다. \n", num1, num2, num3, num2);


    else
        return printf("입력하신 3개의 정수의 값: %d %d %d\n가장 작은 수는 %d 입니다. \n", num1, num2, num3, num3);
}
void Max(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return printf("입력하신 3개의 정수의 값: %d %d %d\n가장 큰 수는 %d 입니다. \n", num1, num2, num3, num1);


    else if (num2 > num1 && num2 > num3)
        return printf("입력하신 3개의 정수의 값: %d %d %d\n가장 큰 수는 %d 입니다. \n", num1, num2, num3, num2);


    else
        return printf("입력하신 3개의 정수의 값: %d %d %d\n가장 큰 수는 %d 입니다. \n", num1, num2, num3, num3);
}
void Up(int num1, int num2, int num3)
{
    if (num1 > num2)//조건 (num1>num2)
    {
        if (num1 > num3)
        {

            if (num2 > num3)
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 오름차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num1, num2, num3);
            }
            else//아닐 때
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 오름차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num1, num3, num2);
            }
        }
        else//아닐 때
        {
            printf("입력하신 3개의 정수의 값: %d %d %d\n 오름차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num3, num1, num2);
        }
    }
    else//(num1>num2)아닐 때 (b>=a)
    {
        if (num2 > num3)
        {
            if (num1 > num3)
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 오름차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num2, num1, num3);
            }
            else//아닐 때
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 오름차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num2, num3, num1);
            }
        }
        else//아닐 때
        {
            printf("입력하신 3개의 정수의 값: %d %d %d\n 오름차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num3, num2, num1);
        }
    }
    return 0;
}
void Down(int num1, int num2, int num3)
{
    if (num1 > num2)//조건
    {
        if (num1 > num3)//조건
        {

            if (num2 > num3)//조건
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 내림차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num3, num2, num1);
            }
            else//아닐 때
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 내림차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num2, num3, num1);
            }
        }
        else//아닐 때
        {
            printf("입력하신 3개의 정수의 값: %d %d %d\n 내림차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num2, num1, num3);
        }
    }
    else//(num1>num2)아닐 때 (num2>=num1)
    {
        if (num2 > num3)
        {
            if (num1 > num3)
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 내림차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num3, num1, num2);
            }
            else//아닐 때
            {
                printf("입력하신 3개의 정수의 값: %d %d %d\n 내림차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num1, num3, num2);
            }
        }
        else//아닐 때
        {
            printf("입력하신 3개의 정수의 값: %d %d %d\n 내림차순으로 정리한 결과입니다.\n%d %d %d\n", num1, num2, num3, num1, num2, num3);
        }
    }
    return 0;
}