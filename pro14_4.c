#include <stdio.h>
#define MAX 100

struct person {
    char name[20];
    char phone[20];
    char email[60];
};
typedef struct person Person;

int inputData(Person* data)
{
    int sel, i;
    for (i = 0; i < MAX; i++)
    {
        printf("�Է��մϱ�(1:��/2:�ƴϿ�)? ");
        scanf("%d", &sel);

        if (sel == 1)
        {
            printf("�̸�? ");
            scanf("%s", data[i].name);
            printf("��ȭ? ");
            scanf("%s", data[i].phone);
            printf("����? ");
            scanf("%s", data[i].email);
        }
        else if (sel == 2)
        {
            break;
        }
    }
    return i;
}

void printData(Person* data, int index)
{
    printf("�̸���: %s\n", (data)->name);
    printf("��ȣ��: %s\n", (data)->phone);
    printf("�̸�����: %s\n", (data)->email);
}

int main()
{
    Person data[MAX];
    int count;

    count = inputData(data);
    printData(data, count);

    return 0;
}