
#include <stdio.h>
#include <conio.h> //getch 함수를 위한 헤더 파일
#include <stdlib.h>   // system 함수를 위한 헤더 파일
#define PI 3.141592   // PI를 매크로 상수로 정의, 6.1.1 ckarh

int main_5_5()
{
    //프로그램 5-28

    int answer, r;   // 사용자가 선택한 메뉴 번호, 반지름 저장 변수  
    double circum, area, volume;

    do {
        printf("=============================\n");
        printf("==   1. 원의 둘레 구하기   ==\n");
        printf("==   2. 원의 넓이 구하기   ==\n");
        printf("==   3. 구의 부피 구하기   ==\n");
        printf("==   4. 그만두기           ==\n");
        printf("=============================\n");
        printf("◈ 원하는 내용은? ");
        scanf_s("%d", &answer);

        if (answer == 1 || answer == 2 || answer == 3)
        {
            printf("\n>> 반지름은? ");
            scanf_s("%d", &r);
            printf("\n>> 반지름이 %d인 ", r);
        }

        switch (answer)
        {
        case 1: circum = 2 * PI * r;   //둘레를 구하는 경우
            printf("원의 둘레는 %6.2lf \n", circum);
            break;
        case 2:   area = PI * r * r;  //넓이를 구하는 경우
            printf("원의 넓이는 %6.2lf \n", area);
            break;
        case 3: volume = 4. / 3 * PI * r * r * r;   //부피를 구하는 경우
            printf("구의 부피는 %6.2lf입니다.\n", volume);
            break;
        case 4: printf("프로그램을 끝냅니다. \n"); exit(0);
        }

        printf("\n>> 결과를 확인했으면 아무키나 누르세요.");
        _getch();         
        system("cls");      // 현재 화면의 내용 지우기
    } while (answer != 4);   // 4. 그만두기를 선택하지 않았다면 다시 반복

    return 0;
}
