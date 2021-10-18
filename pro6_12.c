#include <stdio.h>
//연습문제 5번

double difference(double height, double weight);

int main_6_12()
{
    double height, weight;
    double dif, std_weight;

    //정보 입력
    printf("\n키는?");
    scanf_s("%lf", &height);
    printf("체중은?");
    scanf_s("%lf", &weight);

    // 표준체중과의 차이를 구하는 함수 실행
    dif = difference(height, weight);

    //dif의 값을 통해 표준체중에 대한 정보 출력
    if (dif < 0)
        printf("보다 %.1lfKg 초과\n", -dif);
    else if (dif > 0)
        printf("보다 %.1lfKg 미만\n", dif);
    else
        printf("과 동일\n");

    return 0;
}

double difference(double height, double weight)
{
    double standard, value;
    standard = (height - 100) * 0.9;
    printf("\n\n키가 %.1lf인 사람의 표준 체중 %.1lfKg", height, standard);
    value = standard - weight;


    if ((-0.1 < value) && (value < 0.1)) //문제에서 차이가 0.1미만이면 동일이라고 출력하라고 함
        return 0;
    else
        return value;
}