#include <stdio.h>
#include <string.h>	//strlen �Լ��� ���� ��� ����

void print(char* string);
//���α׷� 10-13

//i�� 1�� �����ϹǷ� ����� �����ϴ� ������ ��ġ�� �� ĭ�� �������
int main_9_13()
{
	char* s = "C-Language";
	int i;

	//s���ڿ��� (i+1)��° ���ں��� ������ ����ϱ⸦ �ݺ�
	for (i = strlen(s); i >= 0; i--)
		print(s + i);

	//���޵Ǵ� s+i�� �ּ��̹Ƿ� string�� �ּҸ� �����ϴ� ������ �������� �Ѵ�

	return 0;
}

//string�� ����Ű�� ������ ���ڿ� ������ ����ϴ� �Լ�
void print(char* string)
{
	printf("%s\n", string);
}

