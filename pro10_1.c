//[���α׷� 10-14] ������ Ca�� Na �׸��� ������ ���� ������ ���ڿ� ����� (ch10-14.cpp)
#include <stdio.h>
#include <string.h>						// strcmp, strcpy �Լ��� ���� ��� ����
#include <stdlib.h>						// itoa �Լ��� ���� ��� ����

int main()
{
	char f_name[20], temp[10];			// ���ϸ��� ������ �迭, �ӽ� ���ڿ� �迭
	int Ca, Na;

	for (Ca = 10; Ca <= 20; Ca += 10)
		for (Na = 1; Na <= 3; Na++)
		{
			strcpy(f_name, "file");		// ���ϸ� "file"�� ���� 

			strcat(f_name, "_Ca_");		// ���ϸ� "_Ca_"�� ���� 
			strcat(f_name, itoa(Ca, temp, 10)); // ���ϸ� Ca�� ���� ����

			strcat(f_name, "_Na_");		// ���ϸ� "_Na_"�� ���� 
			strcat(f_name, itoa(Na, temp, 10));// ���ϸ� Na�� ���� ����

			printf("Ca=%d, Na=%d�� �� ���ϸ�: %s \n", Ca, Na, f_name);
		}

	return 0;
}
