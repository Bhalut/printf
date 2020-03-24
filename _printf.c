#include "holberton.h"
/**
 * _printf - print a char or a string
 * @format: It's a character string
 * Return: the number of character the function is printing
 */
int _printf(const char *format, ...)
{
	st_fmt st_format[] = {
		{"c", func_char},
		{"s", func_string},
		{"d", func_digit},
		{"i", func_digit},
		{"%", func_percent},
		{"b", func_binary_convert},
		{"u", func_unsig_int},
		{"o", func_octal_convert},
		{"x", func_hex_Lowcase_convert},
		{"X", func_hex_Upcase_convert},
		{"S", func_stringUppercase},
		{"r", func_revstr},
		{"R", func_rot13},
		{NULL, NULL}};

	va_list list;
	int count = 0;

	va_start(list, format);
	count =	get_match_func(format, list, st_format);
	va_end(list);
	return (count);
}
