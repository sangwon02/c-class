#include <stdio.h>
//7�� �������� 5��

int main_7_7()
{
	int i, month, num = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
	//0���� �����Ƿ� 0���� �ص�

	printf("1������ �� �������� ������ ���ұ��? ");
	scanf_s("%d", &month);

	for (i = 1; i <= month; i++)
	{
		num += days[i];
	}
	printf("1������ %d�������� �� %d���� �ֽ��ϴ�.\n", month, num);

	return 0;
}