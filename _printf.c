#include "holberton.h"
/**
 * _printf - print a char or a string
 * @format: It's a character string
 * Return: the number of character the function is printing
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0;

	va_start(list, format);
	count =	get_match_func(format, list);
	va_end(list);
	return (count);
}
