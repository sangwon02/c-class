#include <stdio.h>

int recursive_func(int n)
{
	int sum;

	if (n == 1)
		return 1;

	else
		return n + recursive_func(n - 1);

	return sum;
}

int main()
{
	int n = 100;

	printf("sum = %d\n", recursive_func(n));

	return 0;
}