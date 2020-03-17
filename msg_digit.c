#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: Number as a imput
 * Return: 0 Always
 */
int func_digit(va_list list)
{
	unsigned int m;
	int i = 0, k = 0, n = 0;

	n = va_arg(list, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	m = n;
	for (k = 0; (m / 10) > 0; k++)
		m /= 10;

	m = n;
	while (k != 0)
	{
		for (i = 0; i < k; i++)
			m /= 10;
		m %= 10;
		_putchar(m + '0');
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
	return (k);
}
