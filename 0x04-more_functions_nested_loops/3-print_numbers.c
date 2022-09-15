#include "main.h"

/**
 * print_numbers - Print 0 - 9
 * Return: Always 0.
 */
void print_numbers(void)
{
	char d = '0';

	while(d <= '9')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');

	return;
}
