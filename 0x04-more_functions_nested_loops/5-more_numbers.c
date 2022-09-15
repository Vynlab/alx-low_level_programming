#include "main.h"

/**
 * more_numbers - print 1 - 14, 10 times
 * Return: void
 */
void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n/10)
	{
		print(n/10);
	}
	_putchar(n%10 + '0');
}

void more_numbers(void)
{
	int i = '0', j;

	while (i <= '9')
	{
		j = 0;
		while (j <= 14)
		{
			print(j);
			j++;
		}
		_putchar('\n');
		i++;
	}

	return;
}
