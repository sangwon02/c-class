#include <stdio.h>

//연습문제 5번
int main_10_6()
{
	int index = 0, *ptr;
	ptr = &index;
	index++;
	* ptr = *ptr + 1;
	printf("index = %d, *ptr = %d \n", index, *ptr);

	return 0;
}