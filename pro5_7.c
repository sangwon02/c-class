#include <stdio.h>

int main_5_7()
{
	//5�� �������� 6��
	
	char ch;
	printf("���� �Է� : ");
	scanf_s("%c", &ch);

	if (ch >= '0' && ch <= '9') //�����̸� ���
		printf("�����Դϴ�");
	else if (ch >= 'A' && ch <= 'Z')  //�빮���̸� ���
		printf("���ĺ� �빮���Դϴ�");
	else if (ch >= 'a' && ch <= 'z')   //�ҹ����̸� ���
		printf("���ĺ� �ҹ����Դϴ�");
	else
		printf("���ڵ� ���ĺ� ���ڵ� �ƴմϴ�"); //����Ϳ��� �ش��� �ȵǸ� ���

	return 0;
}
