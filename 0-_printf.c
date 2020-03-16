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

	ptr = (va_arg(list, char*));
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
	char *ptr;
	int count = 0;
	
	ptr = va_arg(list, char *);
	if (ptr[1] != 0)
	{
		_putchar('.');
		return (count);
	}
	else
	{
		_putchar(ptr[0]);
		return (count + 1);
	}
}
/**
 * _printf - print a char or a string
 * @format: It's a character string
 * Return: the number of character the function is printing
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, i = 0, j, k;

	fmt st_format [] = {
		{"%c", func_char},
		{"%s", func_string},
		{NULL, NULL}};

	va_start(list, format);
	while (format && format[i] != 0)
	{
		if (format[i] != '%')
		{
		        _putchar(format[i]);
			count += 1;
		}
		else
		{
			j = 0;
			k = 0;
			while (st_format[j].fmt != NULL)
			{
				if (format[i] == st_format[j].fmt[k] && format[i + 1] == st_format[j].fmt[k + 1])
				{
					count += (st_format[j].func(list));
				}
				j++;
				k++;
			}
			i++;
		}
		i++;
	}
	_putchar('\n');
	va_end(list);
	return (count);
}
