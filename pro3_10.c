#include <stdio.h>

int main_3_10()
{
 	int kor, music;
 	double ave;

	printf("±¹¾î À½¾Ç Á¡¼ö´Â? ");
 	scanf_s("%d %d", &kor, &music);

	ave = (kor + music) / 2.0;

	printf("=====================\n");
	printf("±¹¾î    À½¾Ç    Æò±Õ \n");
	printf("---------------------\n");
	printf("%3d     %3d      %.1lf \n", kor, music, ave);
	printf("=====================\n");

	return 0;
}