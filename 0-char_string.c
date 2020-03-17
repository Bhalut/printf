#include "holberton.h"
/**
 * func_string - print a string
 * @list: the list of arguments the function _printf is receiving
 * Return: the number of characteres of the string
 */

int func_string(va_list list)
{
	int count = 0, i;
	char *ptr;
	char *null = "(null)";

	ptr = (va_arg(list, char *));
	if (ptr == 0)
	{
		count = 0;
		for (i = 0; null[i] != 0; i++)
		{
			_putchar(null[i]);
			count += 1;
		}
		
	}
	else
	{
		count = 0;
		for (i = 0; ptr[i] != 0; i++)
		{
			_putchar(ptr[i]);
			count += 1;
		}
	}
	return (count);
}

/**
 * func_char - print a char, or nothing if it is not
 * @list: the list of arguments the funcion id receiving
 * Return: 1 if it is a char, 0 otherwise
 */
int func_char(va_list list)
{
	int count = 0;
	char c;
	
	c = (va_arg(list, int));
	_putchar(c);
	return (count + 1);
}
/**
 *
 *
 *
 */
int func_percent(void)
{
	_putchar('%');
	return (1);
}
