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
        printf("입력합니까(1:예/2:아니오)? ");
        scanf("%d", &sel);

        if (sel == 1)
        {
            printf("이름? ");
            scanf("%s", data[i].name);
            printf("전화? ");
            scanf("%s", data[i].phone);
            printf("메일? ");
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
    printf("이름은: %s\n", (data)->name);
    printf("번호는: %s\n", (data)->phone);
    printf("이메일은: %s\n", (data)->email);
}

int main()
{
    Person data[MAX];
    int count;

    count = inputData(data);
    printData(data, count);

    return 0;
}