#include<stdio.h>

int main_4_26()
{
	//4�� �������� 8��
	int month; //���� ����

	printf("��(1~12)�Է� : ");
	scanf_s("%d", &month); //���� �Է� ����
	printf(">> %d���� %s�ݱ��Դϴ�.\n", month, month <= 6 ? "��" : "��"); 
	//�Է� ���� ���� 6�����̸� ��ݱ� 7�̻��̸� �ϹݱⰡ �ǵ��� ����Ʈ

	return 0;
}