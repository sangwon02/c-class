#include<stdio.h>

int main_4_11()
{
	//���α׷� 5-7
	int gender, married, army, plus, children;

	plus = 0; //�������� ���� �ʱ�ȭ

	printf("���� (��:1��, ��:2) ? "); //���� Ȯ��
	scanf_s("%d", &gender);

	if (gender == 1) //������ ���
	{
		printf("�� ���� (��:1, �ƴϿ�:2) ? "); //������ ����
		scanf_s("%d", &army);

		if (army == 1)
		{
			plus++; //������� +1

			printf("��ȥ (��:1, �ƴϿ�:2) ? "); //��ȥ ����
			scanf_s("%d", &married);
			if (married == 1)
			{
				plus++; // �������̸� ��ȥ�ڸ� +1
			}
		}
	}
	else //������ ���
	{
		printf("��ȥ (��:1, �ƴϿ�:2) ? ");     //��ȥ ����
		scanf_s("%d", &married); 

		if (married == 1)
		{
			plus++; //��ȥ�ڸ� +1

			printf("�ڳ����? ");
			scanf_s("%d", &children);
			if (children == 1)
			{
				plus++;
			}
			else if (children >= 2)
			{
				plus += 2; //�ڳడ ���̻�� +2
			}
		}
	}
	printf("\n>>�� �������� %d���Դϴ�.", plus);
	return 0;
}