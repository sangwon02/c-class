#include <stdio.h>

int addition(int n);

//���α׷� 8-31
int main12_2()
{
	int n;

	printf("1���� n������ ���� ���ϴ� ���α׷��Դϴ�. n��? ");
	scanf("%d", &n);
	printf("1���� %d������ ���� %d�Դϴ�.", n, addition(n));

	return 0;
}

//1���� n������ ���� ���ϴ� ��� �Լ�
int addition(int n)
{
	int result;

	if (n > 1)
		result = addition(n - 1) + n;
	else
		result = 1;


	return result;
}
