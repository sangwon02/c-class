//[���α׷� 10-15] char�� 2���� �迭�� �̿��� ���ڿ� ���� �� ���� (ch10-15.cpp)
#include <stdio.h>
#include <string.h>						// strcmp, strcpy �Լ��� ���� ��� ����
#define SIZE 5									// �迭�� ���Ҽ� 

int main()
{
	char silver[SIZE][10] = { "������", "����", "������", "���ǿ�", "������" };
	char temp[10];							// ���ڿ� �ּҸ� �ӽ÷� ������ ������
	int pass, i;

	printf("** ���޴� ����Ʈ : ");
	for (i = 0; i < SIZE; i++)				// ���� �� �迭 ���� ����ϱ�
		printf("%s, ", silver[i]);
	printf("\b\b **\n\n");			// \b�� �̿��Ͽ� ������ �̸� ���� , �����

	//silver[i] ���ڿ��� silver[i+1]���� �ڿ� ������ ���ڿ��̶�� 0���� ū ���� ��ȯ�ȴ�.

	// ���� ������ �̿��Ͽ� �̸��� �����ټ����� �����ϱ�
	for (pass = 1; pass < SIZE; pass++)
		for (i = 0; i < SIZE - pass; i++)
			if (strcmp(silver[i], silver[i + 1]) > 0)	//�� ���ڿ��� ������ ��ȯ�ϱ�
			{
				strcpy(temp, silver[i]);
				strcpy(silver[i], silver[i + 1]);
				strcpy(silver[i + 1], temp);
			}

	printf("** ������ ����Ʈ : ");
	for (i = 0; i < SIZE; i++)				// ���� �� �迭 ���� ����ϱ�
		printf("%s, ", silver[i]);
	printf("\b\b **\n");				// \b�� �̿��Ͽ� ������ �̸� ���� , �����

	return 0;
}