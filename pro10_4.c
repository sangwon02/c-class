#include <stdio.h>

//�������� 2��
int main_10_4()

{
	int sum = 0;
	int* ptr; // ptr ����       
	ptr = &sum;   // ptr�� sum�� ����Ű��  
	printf("sum=%d\n", *ptr);  //ptr�� �̿��Ͽ� sum ���� ����ϱ�

	return 0;
}

