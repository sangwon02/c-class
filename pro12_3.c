#include <stdio.h>

void palindrome(int n);

//���α׷� 8-32

int main12_3()
{
	int n;

	printf("���� ���� n�� �Է��ϸ� �Ųٷ� ����ϴ� ���α׷��Դϴ�. n��? ");
	scanf("%d", &n);

	palindrome(n);

	return 0;
}

//���� ���� n�� �Ųٷ� ����ϴ� ����� �Լ�
void palindrome(int n)
{
	//n�� ���ڸ� �� ����ϱ�
	printf("%d", n % 10);

	//n�� 10���� �̻��� ���̶�� ��� ȣ��� ������ �ڸ��� �����
	if (n >= 10)
		palindrome(n / 10);
}