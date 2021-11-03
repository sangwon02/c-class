#include <stdio.h>
//프로그램 9-9

void find_PW();
void find_ID();

int main_8_9()
{
    int service;  //사용자가 요청한 서비스 번호 저장

    do
    {
        printf("\n <<< 1.ID 찾기 2. PW 찾기 3. 종료하기 >>> \n");
        printf(" 원하는 서비스 번호를 입력하세요(1~3) ");
        scanf("%d", &service);

        switch (service)
        {
        case 1: find_ID(); break; //아이디 찾기실행
        case 2: find_PW();  //비밀번호 찿기실행
        }
    } while (service != 3); // 3.종료하기를 선택하지 않는한 계속 반복

    return 0;
}

//아이디 찾기 서비스 함수
void find_ID()
{
    static int count_ID = 0;  //find_ID의 호출 저장

    count_ID++;   //find_ID  함수가 호출시 1씩 증가
    printf("\n 총 %d회째 ID찾기 요청입니다. \n", count_ID);
}

//비밀번호 찾기 서비스 함수
void find_PW()
{
    int count_PW = 0; //자동 변수

    count_PW++;
    printf("\n 총 %d회째 비밀번호 찾기 요청입니다. \n", count_PW);
}