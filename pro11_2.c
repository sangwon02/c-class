#include <stdio.h>

//���α׷� 11-2

// ����ü ����
struct person
{
	char name[9];//�̸�
	char gender[3];//����
	int age;//����
};

int main_11_2()
{
	//�� ���� ����� ������ ����ü ���� �����ϱ�
	struct person u1 = { "������", "��", 20 }, u2 = { "������", "��", 29 },
		u3 = { "������", "��", 25 };

	struct person oldest;//�ְ������ ������ ������ ����ü ����

	if (u1.age > u2.age)
	{
		//u1�� u3 �� ����� ã��
		if (u1.age > u3.age)
			oldest = u1;	// u1�� ��� ����� oldest ����ü ������ �� ���� �����Ѵ�.
		else
			oldest = u3;
	}
	else
	{
		//u2�� u3 �� ����� ã��
		if (u2.age > u3.age)
			oldest = u2;
		else
			oldest = u3;
	}

	printf(" �̸�   ����	���� \n");
	printf("======================\n");
	printf("%s\t %s\t %2d\n", u1.name, u1.gender, u1.age);
	printf("%s\t %s\t %2d\n", u2.name, u2.gender, u2.age);
	printf("%s\t %s\t %2d\n", u3.name, u3.gender, u3.age);
	printf("======================\n\n");
	printf(" << �ְ�� ����� >>\n\n");
	printf(" %s\t %s\t %d\n\n", oldest.name, oldest.gender, oldest.age);

	return 0;
}

