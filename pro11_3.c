#include <stdio.h>
#include <string.h>  //strcmp �Լ��� ���� ��� ����
#define N 10

//���α׷� 11-3

// ����ü ����
struct person
{
	char name[7];  //�̸�
	char gender[3];	//����
	int age;  //����
};

int main_11_3()
{
	//N���� ����ü�� ���Ҹ� ���� �迭�� ����� �ʱ�ȭ
	struct person user[N] = { {"������", "��", 20}, {"������", "��", 29},
		{"������", "��", 25}, {"���ǿ�", "��", 22}, {"������", "��", 25},
		{"������", "��", 29}, {"�嵵��", "��", 32}, {"�����", "��", 29},
		{"�̳���", "��", 31}, {"���ؼ�", "��", 35} };

	int male = 0, female = 0, sum = 0, i; //���ڼ�, ���ڼ�

	//���� ���� ��ü ������ �� ���ϱ�
	for (i = 0; i < N; i++)
	{
		//user[i]�� gender ����� ����� ������ ���� ���ڼ� �Ǵ� ���ڼ��� 1 ����
		if (strcmp(user[i].gender, "��") == 0) //�� ���ڿ��� ���ٸ� 0�� ��ȯ�ȴ�.
			male++;
		else
			female++;

		sum += user[i].age; //������� ���̸� sum�� ����
	}


	printf(" �̸�   ����	���� \n");
	printf("======================\n");
	for (i = 0; i < N; i++)
		printf("%s\t %s\t %d\n", user[i].name, user[i].gender, user[i].age);
	printf("======================\n\n");
	printf(">> ����: %d��\n", male);
	printf(">> ����: %d��\n", female);
	printf(">> ��� ����: %d��\n", sum / N);

	return 0;
}
