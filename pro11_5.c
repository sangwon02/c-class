#include <stdio.h>
#define N 5

//���α׷� 11-5


struct person //����ü ����
{
	char name[7], gender[3];//�̸�, ����
	int age; //����
};

// �Լ��� ���� ����
void input_by_address(struct person* ptr);	//�ּҿ� ���� ȣ��
void output_by_value(struct person shopper);//���� ���� ȣ��

int main_11_5()
{
	struct person buyer;

	input_by_address(&buyer); //�ּҿ� ���� ȣ�� ���	

	printf("\n>> ������ ���� : ");
	output_by_value(buyer); //���� ���� ȣ�� ���

	return 0;
}

//ptr�� ����Ű�� ���� ����ü�� �ڷḦ �Է��ϴ� �Լ�
void input_by_address(struct person* ptr)
{
	printf("�̸���? "); scanf("%s", ptr->name);
	printf("������(�� �Ǵ� ��)? "); scanf("%s", ptr->gender);
	printf("���̴�? "); scanf("%d", &ptr->age);
}

//���޵� ����ü�� ����� ����ϴ� �Լ�
void output_by_value(struct person shopper)
{
	printf("%s(%s) %d��\n", shopper.name, shopper.gender, shopper.age);
}