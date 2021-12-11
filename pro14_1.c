#include <stdio.h>

int main()
{
	char* str[3] = { "Hello", "World", "C L anguage" };
	char** str0 = &str;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			if (str0[i][j] != ' ')
			{
				printf("%c\n", str0[i][j]);
				break;
			}
			else
				continue;
		}
	}
	return 0;
}