#include <stdio.h>

void reverse(int n);

//���α׷� 8-30

int main12_1()
{
	int n;

	printf("n���� 1���� �Ųٷ� ����ϴ� ���α׷��Դϴ�. n��? ");
	scanf("%d", &n);

	reverse(n);

	return 0;
}

//n���� 1���� �Ųٷ� ����ϴ� ����Լ�
void reverse(int n)
{
	printf("%3d", n);
	if (n > 1)
		reverse(n - 1);

	return;
}