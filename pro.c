#include <stdio.h>
#include <conio.h> //getch 함수를 위한 헤더 파일
#include <stdlib.h>   // system 함수를 위한 헤더 파일
void Max(int, int, int); //Max함수 선언
void Min(int, int, int); //Min함수 선언
void Up(int, int, int); //Climbing함수 선언
void Down(int, int, int); //Descending함수 선언

int main()
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
                printf("입력하신 3개의 정수의 값: %d %d %d\n", num1, num2, num3);
                printf("3개의 정수를 입력하세요.:");
                scanf_s("%d %d %d", &num1, &num2, &num3);
            
                break;
            case 2:  
                printf("입력하신 3개의 정수의 값: %d %d %d\n", num1, num2, num3);
                printf("가장 작은 수 입니다. \n");
                Min(num1, num2, num3);
                break;
            case 3: 
                printf("입력하신 3개의 정수의 값: %d %d %d\n", num1, num2, num3);
                printf("가장 큰 수 입니다. \n");
                Max(num1, num2, num3);
                break;
            case 4: 
                printf("입력하신 3개의 정수의 값: %d %d %d\n", num1, num2, num3);
                printf("오름차순으로 정리한 결과입니다.\n");
                Up(num1, num2, num3);
                break;
            case 5: 
                printf("입력하신 3개의 정수의 값: %d %d %d\n", num1, num2, num3);
                printf("내림차순으로 정리한결과 입니다.\n");
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
    if (a > b)//조건 (a>b)
    {
        if (a > c)//조건 (a>c)
        {

            if (b > c)//조건 (b>c)
            {
                printf("%d %d %d\n", a, b, c);//a,b,c
            }
            else//아닐 때
            {
                printf("%d %d %d\n", a, c, b);//a,c,b
            }
        }
        else//아닐 때
        {
            printf("%d %d %d\n", c, a, b);//c,a,b
        }
    }
    else//(a>b)아닐 때 (b>=a)
    {
        if (b > c)//조건 (b>c)
        {
            if (a > c)//조건(a>c)
            {
                printf("%d %d %d\n", b, a, c);//b, a, c
            }
            else//아닐 때
            {
                printf("%d %d %d\n", b, c, a);//b, c, a
            }
        }
        else//아닐 때
        {
            printf("%d %d %d\n", c, b, a);//c, b,a
        }
    }
    return 0;
}
void Down(int a, int b, int c)
{
    if (a > b)//조건 (a>b)
    {
        if (a > c)//조건 (a>c)
        {

            if (b > c)//조건 (b>c)
            {
                printf("%d %d %d\n", c, b, a);
            }
            else//아닐 때
            {
                printf("%d %d %d\n", b, c, a);
            }
        }
        else//아닐 때
        {
            printf("%d %d %d\n", b, a, c);
        }
    }
    else//(a>b)아닐 때 (b>=a)
    {
        if (b > c)//조건 (b>c)
        {
            if (a > c)//조건(a>c)
            {
                printf("%d %d %d\n", c, a, b);
            }
            else//아닐 때
            {
                printf("%d %d %d\n", a, c, b);
            }
        }
        else//아닐 때
        {
            printf("%d %d %d\n", a, b, c);
        }
    }
    return 0;
}