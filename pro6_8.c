#include <stdio.h>
//���α׷�8-8

void print_title();
void print_information(void);

int main_6_8()
{
	print_title();
	print_information();

	return 0;
}

// ���� ����
void print_title()
{
	printf("=============================\n");
	printf("==    C ���α׷��� ����    ==\n");
	printf("== ���� �Լ� �׷��� �׸��� ==\n");
	printf("=============================\n");
}

// ���� ����
void print_information(void)
{
	printf("\n\n");
	printf("%30s \n", "���Ѵ��б�");
	printf("%30s \n", "IT�к�");
	printf("%30s \n", "ȫ�浿");
}