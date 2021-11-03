#include <stdio.h>
//과제 2번

int main_8_10()
{
	int arr[5]; //입력받을 배열 생성

	for (int i = 0; i < 5; i++) //for운을 통해 정수 입력받음
	{
		scanf("%d", &arr[i]);
	}

	int num1, num2, num3, num4, num5, num;
	//입력받은 정수들을 각자리수에 맞게 곱함
	num1 = arr[0] * 10000;
	num2 = arr[1] * 1000;
	num3 = arr[2] * 100;
	num4 = arr[3] * 10;
	num5 = arr[4];
	//더한 후 하나의 정수 출력
	num = num1 + num2 + num3 + num4 + num5;
	printf("\n%d", num);

	return 0;
}