#include <stdio.h>
//���� 2��

int main_8_10()
{
	int arr[5]; //�Է¹��� �迭 ����

	for (int i = 0; i < 5; i++) //for���� ���� ���� �Է¹���
	{
		scanf("%d", &arr[i]);
	}

	int num1, num2, num3, num4, num5, num;
	//�Է¹��� �������� ���ڸ����� �°� ����
	num1 = arr[0] * 10000;
	num2 = arr[1] * 1000;
	num3 = arr[2] * 100;
	num4 = arr[3] * 10;
	num5 = arr[4];
	//���� �� �ϳ��� ���� ���
	num = num1 + num2 + num3 + num4 + num5;
	printf("\n%d", num);

	return 0;
}