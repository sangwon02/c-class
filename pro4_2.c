#include<stdio.h>

int main_4_2()
{
	//���α׷� 4-13
	char x = 'a';
	int y;
	double z = 1.234;

	printf("y �Է� :");
	scanf_s("%d", &y); //�ּ� ������

	printf("���� y�� �� = %d\n", y);
	printf("���� y�� �ּ� = %p\n", &y); //�ּ� ������
	printf("\n");
	

	y = (y = 3, y + 5); //�޸� ������
	printf("y = %d\n", y);
	printf("char�� ���� x�� ũ�� = %d\n", sizeof x); //sizeof ������
	printf("int�� ���� y�� ũ�� = %d\n", sizeof y);
	printf("double�� ���� z�� ũ�� = %d\n", sizeof(z));
	printf("float���� ũ�� = %d\n", sizeof(float));
	//

	return 0;
}