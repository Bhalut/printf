#include "holberton.h"
/**
 * get_match_func - match format with function format
 * @format: It's a character string
 * @list: the list of arguments the function _printf is receiving
 * Return: the number of character the function is printing
 */
int get_match_func(const char *format, va_list list, st_fmt st_format[])
{
	int count = 0, i = 0, j, k = 0, num = 0;

	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count += 1;
		}
		else
		{
			for (j = 0; st_format[j].fmt; j++)
			{
				if (format[i + 1] == st_format[j].fmt[k])
				{
					num = st_format[j].func(list);
					count += num;
					i++;
					break;
				}
			}
			if (st_format[j].fmt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
					i++;
				}
				else
					return (-1);
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (count);


}


