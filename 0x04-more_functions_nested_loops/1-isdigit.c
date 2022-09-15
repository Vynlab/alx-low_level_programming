#include <ctype.h>

/**
 * _isdigit - Check provided character if it's a digit.
 * Return: 1 if it is a digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
