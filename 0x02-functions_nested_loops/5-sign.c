#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	if (x > 0)
	{
		printf("+, 1\n");
		return (1);
	}
	else if (x < 0)
	{
		printf("-, /\n");
		return (-1);
	}
	else
	{
		printf("0, 0\n");
		return (0);
	}

	return (0);
}
