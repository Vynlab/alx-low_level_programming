#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	/* int a, b; */

	for (a = 0; a < b; a++)
	{
		printf("%d\n", a);
	}

	for (a = 0; a < b; a++)
		printf("%d\n", a);

	for (int a = 0; a < b; a++)
	{
		printf("%d\n", a);
	}

	a = 0;
	for (a < b;;)
	{
		printf("%d\n", a++);
	}

	a = 0;
	for (; a < b;)
	{
		printf("%d\n", a++);
	}

	return (0);
}
