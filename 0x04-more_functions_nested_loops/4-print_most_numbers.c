#include "main.h"

/**
 * print_most_numbers - Print 0 - 9, excluding 2, 4
 * Return: void.
 */
void print_most_numbers(void)
{
	int d = '0';

	while (d <= '9')
	{
		if ( d != '2' && d != '4')
		{
			_putchar(d);
		}
		d++;
	}
	_putchar('\n');

	return;
}
