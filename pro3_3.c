#include <stdio.h>

int main()
{
	char lower, upper, char_num, num;

	printf("���ĺ� �ҹ��� �� ���� �Է��ϼ���.   ");
	lower = getchar();

	upper = 'A' + (lower - 'a');

	printf("�Է��� �ҹ��� %c�� �빮�ڴ� %c \n", lower, upper);

	fflush(stdin); //���ۿ� ���� ���� ���ڸ� �����ϱ� ���� ���� ��ü�� ����.
	printf("\n0-9�� �� ���� �Է��ϼ���. ");
	while(getchar()!='\n');
	scanf_s("%c", &char_num);


	num = char_num - '0';

	printf("�Է��� ���� %c�� ���� %d�Դϴ�. \n", char_num, num);



	return 0;
}