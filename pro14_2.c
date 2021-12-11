#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[5][100];
    int i;

    for (i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
        str[i][100] = (char)malloc(sizeof(str[i] + 1));
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}