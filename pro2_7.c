#include <stdio.h>

int main_2_7()
{
	//���� ����
	int std_no, kor, world, math;
	double avg;

	//���Թ��� ����� ���� �� �����ϱ�
	std_no = 2013901;
	kor = 89;
	world = 100;
	math = 95;

	//������ ��� ���ϱ�
	avg = (kor + world + math) / 3.0;

	//����� ���Ŀ� ���纸������ ����
	printf("%-6s :%d \n", "�й�", std_no);
	printf("==============================\n");
	printf("%-6s :%4d(��) \n", "����", kor);
	printf("%-6s :%4d(��) \n", "�����", world);
	printf("%-6s :%4d(��) \n", "����", math);
	printf("==============================\n");
	printf("%-6s :%7.2lf \n", "���", avg);


	return 0;
}