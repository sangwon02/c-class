#include <stdio.h>
#define SIZE 5
//���α׷� 10-6

int main_9_6()
{
	int i, arr[SIZE] = { 1, 2, 3, 4, 5 };//�迭 ����
	int* ptr;//������ ����

	ptr = arr;//ptr�� �迭 arr�� ���� �ּҸ� �����Ͽ� arr �迭�� ����Ű�� �ϱ�

	//�迭��[÷��]�� ����� �迭 ���ҿ� ����� �� ���

	for (i = 0; i < SIZE; i++)
		printf("arr[%d] = %d \n", i, arr[i]);
	printf("\n");

	printf("arr �迭�� ���� �ּ�(%u) = ptr�� ����� �ּ�(%u) \n\n", arr, ptr);

	//�迭�� ���� ������ ���� �迭 ���ҿ� ����� ���� ���
	for (i = 0; i < SIZE; i++)
		printf("*(arr+%d) = *(%u) = %d \n", i, arr + i, *(arr + i));
	printf("\n");


	//������ ������ ���� �迭 ���ҿ� ����� ���� ���
	for (i = 0; i < SIZE; i++)
		printf("*(ptr+%d) = *(%d) = %d \n", i, ptr + i, *(ptr + i));
	printf("\n");


	//������ ���� ptr�� �迭��ó�� ����Ͽ� ���Ҹ� ���

	for (i = 0; i < SIZE; i++)
		printf("ptr[%d] = %d \n", i, ptr[i]);
	printf("\n");

	return 0;
}