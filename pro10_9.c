#include <stdio.h>

int main()

{
	int sum = 0;
	int* ptr; // ptr 선언       
	ptr = &sum;   // ptr이 sum을 가리키기  
	printf("sum=%d\n", *ptr);  //ptr을 이용하여 sum 값을 출력하기

	return 0:

}