#include <stdio.h>

int main_5_6()
{
	//4_15 �ݺ��� ���� 
	char ch;

	printf("�����Է�:");
	scanf_s("%c", &ch);  

	for (int i = 7; i >= 0; i--) //7���� 1�� �پ��� 8�� �ݺ�
	{
		printf("%2d", ch & (1 << i) ? 1 : 0);
	}
	
	return 0;
}