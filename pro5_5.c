
#include <stdio.h>
#include <conio.h> //getch �Լ��� ���� ��� ����
#include <stdlib.h>   // system �Լ��� ���� ��� ����
#define PI 3.141592   // PI�� ��ũ�� ����� ����, 6.1.1 ckarh

int main_5_5()
{
    //���α׷� 5-28

    int answer, r;   // ����ڰ� ������ �޴� ��ȣ, ������ ���� ����  
    double circum, area, volume;

    do {
        printf("=============================\n");
        printf("==   1. ���� �ѷ� ���ϱ�   ==\n");
        printf("==   2. ���� ���� ���ϱ�   ==\n");
        printf("==   3. ���� ���� ���ϱ�   ==\n");
        printf("==   4. �׸��α�           ==\n");
        printf("=============================\n");
        printf("�� ���ϴ� ������? ");
        scanf_s("%d", &answer);

        if (answer == 1 || answer == 2 || answer == 3)
        {
            printf("\n>> ��������? ");
            scanf_s("%d", &r);
            printf("\n>> �������� %d�� ", r);
        }

        switch (answer)
        {
        case 1: circum = 2 * PI * r;   //�ѷ��� ���ϴ� ���
            printf("���� �ѷ��� %6.2lf \n", circum);
            break;
        case 2:   area = PI * r * r;  //���̸� ���ϴ� ���
            printf("���� ���̴� %6.2lf \n", area);
            break;
        case 3: volume = 4. / 3 * PI * r * r * r;   //���Ǹ� ���ϴ� ���
            printf("���� ���Ǵ� %6.2lf�Դϴ�.\n", volume);
            break;
        case 4: printf("���α׷��� �����ϴ�. \n"); exit(0);
        }

        printf("\n>> ����� Ȯ�������� �ƹ�Ű�� ��������.");
        _getch();         
        system("cls");      // ���� ȭ���� ���� �����
    } while (answer != 4);   // 4. �׸��α⸦ �������� �ʾҴٸ� �ٽ� �ݺ�

    return 0;
}
