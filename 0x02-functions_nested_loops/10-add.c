#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int add();

int main(void)
{
	printf("%d\n", add(5, 7));

	return (0);
}

int add(int a, int b)
{
	int sum;
	sum = a +b;

	return sum;
}
