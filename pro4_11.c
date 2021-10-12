#include<stdio.h>

int main_4_11()
{
	//프로그램 5-7
	int gender, married, army, plus, children;

	plus = 0; //가산점을 먼저 초기화

	printf("성별 (남:1여, 여:2) ? "); //성별 확인
	scanf_s("%d", &gender);

	if (gender == 1) //남자인 경우
	{
		printf("군 제대 (예:1, 아니오:2) ? "); //군제대 여부
		scanf_s("%d", &army);

		if (army == 1)
		{
			plus++; //군제대시 +1

			printf("결혼 (예:1, 아니오:2) ? "); //결혼 여부
			scanf_s("%d", &married);
			if (married == 1)
			{
				plus++; // 군제대이면 기혼자면 +1
			}
		}
	}
	else //여자인 경우
	{
		printf("결혼 (예:1, 아니오:2) ? ");     //결혼 여부
		scanf_s("%d", &married); 

		if (married == 1)
		{
			plus++; //기혼자면 +1

			printf("자녀수는? ");
			scanf_s("%d", &children);
			if (children == 1)
			{
				plus++;
			}
			else if (children >= 2)
			{
				plus += 2; //자녀가 둘이상시 +2
			}
		}
	}
	printf("\n>>총 가산점은 %d점입니다.", plus);
	return 0;
}