#include "holberton.h"
/**
 * _printf - print a char or a string
 * @format: It's a character string
 * Return: the number of character the function is printing
 */
int get_match_func(const char *format, va_list list)
{
	int count = 0, i = 0, j, k = 0, num = 0;

	fmt st_format[] = {{"c", func_char}, {"s", func_string}, {"d", func_digit},
		{"i", func_digit}, {"%", func_percent}, {NULL, NULL}};

	while (format && format[i] != 0)
	{
		if (format[i] != '%')
		{
			if (format[i] == '\n')
			{
				_putchar('\n');
				i++;
				count += 1;
				break;
			}
			else
			{
				_putchar(format[i]);
				count += 1;
			}
		}
		else
		{
			j = 0;
			while (st_format[j].fmt)
			{
				if (format[i + 1] == st_format[j].fmt[k])
				{
					num = st_format[j].func(list);
					count += num;
					i++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (count);
}
