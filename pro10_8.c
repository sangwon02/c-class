#include <stdio.h>
//�������� 7��
int main_10_8()
{
	int* ptr, a[5] = { 10, 20, 30, 40, 50 };
	ptr = a;
	printf("���� ����: %d, ���� ����: %d", *(ptr + 3), ptr[3]);

	return 0;
}