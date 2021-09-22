#include <stdio.h>

int main_3_1()
{
	int age;
	char gender;
	double height;

	//자료입력받기
	printf("성별은? (남자라면 M 여자라면 F) ");
	scanf_s("%c", &gender);
	printf("나이는? ");
	scanf_s("%d", &age);
	printf("키는? ");
	scanf_s("%lf", &height);

	//결과 출력하기
	printf("===================\n");
	printf("성별: %c\n", gender);
	printf("나이: %d세\n", age);
	printf("키: %.lfcm\n", height);


	return 0;
}