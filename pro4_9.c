#include<stdio.h>

int main_4_9()
{
	//���α׷� 5-5
	int kor, music, art;
	double avg;
	printf("���� ���� �̼� ������?");
	scanf_s("%d %d %d", &kor, &music, &art);

	avg = (double)(kor + music + art) / 3;

	printf("=============================================\n");
	printf("\n \n ���� \t���� \t �̼� \t��� \t���\n");
	printf("---------------------------------------------\n");
	printf("%3d \t%3d \t%3d \t%6.1lf ", kor, music, art, avg);
	if (avg >= 70)
		printf("\t���\n");
	else
		printf("\tŻ��\n");
	printf("=============================================\n");

	return 0;
}