#include <stdio.h>
#define SIZE 10		//�迭�� ũ�⸦ ��ũ�� ����� ���� 

void exchange_sort(int* a);	//��ȯ ����
void bubble_sort(int* a);	//���� ����
void select_sort(int* a); //���� ����
void insert_sort(int* a);	//���� ����
void swap(int* p, int* q);	//�� ������ ���� ��ȯ�ϴ� �Լ�
void print(int* a); //�迭 ���
void copy_list(int*, int*);//�迭 ����
//���α׷� 10-9

int main_9_9()
{
	int copy[SIZE];
	int list[SIZE] = { 10, 5, 4, 2, 3, 8, 7, 9, 6, 1 };	
	//�迭 ����� �ʱ�ȭ

	printf(">> �迭 ����: "); print(list);	//������ �迭 ���� ���
	copy_list(list, copy);//�迭 ���� �ʱ�ȭ, ����, ��� ���
	printf("\n>> ��ȯ ����: "); exchange_sort(copy); print(copy);

	copy_list(list, copy);
	printf(">> ���� ����: "); bubble_sort(copy); print(copy);

	copy_list(list, copy); 	
	printf(">> ���� ����: "); select_sort(copy); print(copy);

	copy_list(list, copy); //�迭 ���� �ʱ�ȭ, ����, ��� ���
	printf(">> ���� ����: "); insert_sort(copy); print(copy);
	return 0;
}

void copy_list(int* a, int* b) //b �迭�� a �迭�� �����ϰ� ����
{
	int i;

	for (i = 0; i < SIZE; i++)
		*(b + i) = *(a + i);		
}

void exchange_sort(int* a) //��ȯ ����: ������ ǥ����� �̿�
{
	int i, j;

	for (i = 0; i < SIZE - 1; i++)
		for (j = i + 1; j < SIZE; j++)
			if (*(a + i) > *(a + j))
				swap(a + i, a + j);	//a[i]�� a[j]�� ��ȯ 
}

void bubble_sort(int* a) //���� ����:������ ǥ����� �̿�
{
	int i, j;

	for (i = 0; i < SIZE - 1; i++)
		for (j = 0; j < SIZE - i - 1; j++)
			if (*(a + j) > *(a + j + 1))
				swap(a + j, a + j + 1);	
	             //a[i]�� a[j]�� ��ȯ
}

void select_sort(int a[]) //���� ����:�迭��[÷��] ǥ����� �̿�
{
	int i, j, index;

	for (i = 0; i < SIZE - 1; i++)
	{
		index = i;	//a[i]�� �ּҰ����� �����ϰ� index�� i�� �ʱ�ȭ
		for (j = i + 1; j < SIZE; j++)
		{
			if (a[index] > a[j])//������ �ּҰ� a[index]���� a[j]�� �� �۴ٸ�
				index = j;	//index�� �� �ּҰ��� ÷�� j�� �����ϱ� 	
		}
		swap(&a[i], &a[index]);	//a[i]�� a[index]�� ��ȯ
	}
}

void insert_sort(int* a)//���� ����:������ ������� �迭��[÷��] ǥ��� ȥ��
{
	int i, j, target;

	for (i = 1; i < SIZE; i++)
	{
		target = a[i];	//������ ���� a[i]�� ���� target�� ����

		for (j = i - 1; j >= 0; j--)//a[i-1]~a[0] �߿��� a[i]�� ������ ��ġ ã��
			if (target < a[j])
				a[j + 1] = a[j];//a[j]�� �� ĭ �ڷ� �̷��
			else
				break;//target�� �� ��ġ (j+1)�� ã�����Ƿ� for���� ������

		a[j + 1] = target;			     
	}
}

void swap(int* p, int* q)//p�� q�� ����Ű�� �μ��� ���� ��ȯ�ϱ�
{
	int temp;

	temp = *p; *p = *q; *q = temp;
}

void print(int* a)	//a�� ����Ű�� �迭 ���� ����ϱ�
{
	int i;

	for (i = 0; i < SIZE; i++)
		printf("%d ", *(a + i));	
	printf("\n");
}
