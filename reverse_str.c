#include "holberton.h"
/**
 * func_revstr - function that reverses a string
 * @list: is the list of arguments the function _printf receives
 * Return: Number of caracteres printing
 */
int func_revstr(va_list list)
{
	char *str;
	int count = 0, i, j = 0;

	str = va_arg(list, char *);
	for (i = 0; str[i] != 0; i++)
	{
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (count);
}
