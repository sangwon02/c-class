#include <stdio.h>

int main_5_4()
{
    //���α׷� 5-26
   int n, odd, even, odd_sum = 0, even_sum = 0;

   printf("���� n�� �Է��Ͻÿ� :  ");

   scanf_s("%d", &n);

   odd = 1; even = 2;
   while (odd <= n && even <= n)
   {
      odd_sum += odd;  //¦������ ���� ���� ����
      even_sum += even;  //Ȧ������ ���� ���� ����
      odd += 2;
      even += 2;
   }
   printf("���� 1���� %d���� Ȧ������ ���� %d�̰� ", n, odd_sum);

   printf("¦������ ���� %d�Դϴ�.\n", even_sum);
 
   return 0;
}