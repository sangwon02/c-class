#include<stdio.h>

int main_4_1()
{
	//ÇÁ·Î±×·¥ 4-12
	char ch = 'A';
	int x = 10, y = 4, sum;
	double pi = 3.14, avg;

	sum = ch + 2;  //ÀÚµ¿ Çü ³ÐÈû º¯È¯
	printf("sum = %d = %c \n", sum, sum);

	sum = pi;
	printf("sum= %d\n", sum);

	printf("Á¤¼ö °£ x/y = %d \n", x / y);
	printf("½Ç¼ö °£ x/y = %lf \n", (double)x, (double)y);

	sum = (double)x / (double)y;
	printf("Àß¸øµÈ ³ª´°¼À = %d \n", sum);

	avg = (double)(x/y);
	printf("Àß¸øµÈ ³ª´°¼À = %lf \n", avg);

	avg = (double)x/y;
	printf("Á¤È®ÇÑ ³ª´°¼À = %lf \n", avg);



	return 0;
}