#include <stdio.h>
int convert(int second);
//�������� 3��

int main_6_10()
{
	int second;   // ��
	int hour;
	second = 5000;
	hour = convert(second); // �ʸ� �ð����� ��ȯ�ϱ�   printf("%d�ʴ� %d�ð�", second, hour);

	return 0;
}

int convert(int second)
{
	second = second / 60; // �� ������ ��ȯ
	second = second / 60; // �ð� ������ ��ȯ
	return second;
}