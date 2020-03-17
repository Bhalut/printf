#include "holberton.h"
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
					count += st_format[j].func(list);
					_putchar('x');
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
