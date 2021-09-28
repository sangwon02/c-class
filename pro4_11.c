#include<stdio.h>

int main_4_11()
{
	//프로그램 5-7
	int gender, married, army, plus, children;

	plus = 0;

	printf("성별 (남:1여, 여:2) ? ");
	scanf_s("%d", &gender);

	if (gender == 1)
	{
		printf("군 제대 (예:1, 아니오:2) ? ");
		scanf_s("%d", &army);

		if (army == 1)
		{
			plus++;

			printf("결혼 (예:1, 아니오:2) ? ");
			scanf_s("%d", &married);
			if (married == 1)
			{
				plus++;
			}
		}
	}
	else
	{
		printf("결혼 (예:1, 아니오:2) ? ");     //결혼 여부를 묻기
		scanf_s("%d", &married);

		if (married == 1)
		{
			plus++;

			printf("자녀수는? ");
			scanf_s("%d", &children);
			if (children == 1)
			{
				plus++;
			}
			else if (children >= 2)
			{
				plus += 2;
			}
		}
	}
	printf("\n>>총 가산점은 %d점입니다.", plus);

	return 0;
}