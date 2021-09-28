#include<stdio.h>

int main_4_9()
{
	//프로그램 5-5
	int kor, music, art;
	double avg;
	printf("국어 음악 미술 점수는?");
	scanf_s("%d %d %d", &kor, &music, &art);

	avg = (double)(kor + music + art) / 3;

	printf("=============================================\n");
	printf("\n \n 국어 \t음악 \t 미술 \t평균 \t결과\n");
	printf("---------------------------------------------\n");
	printf("%3d \t%3d \t%3d \t%6.1lf ", kor, music, art, avg);
	if (avg >= 70)
		printf("\t통과\n");
	else
		printf("\t탈락\n");
	printf("=============================================\n");

	return 0;
}