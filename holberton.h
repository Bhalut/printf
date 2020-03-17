#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int func_string(va_list);
int func_char(va_list);
int func_percent(va_list);
int get_match_func(const char *, va_list);
int func_digit(va_list);

/**
 * struct format - the struct by name fmt
 * @fmt: index by function
 * @func: pointer to function - funtion print
 */
typedef struct format
{
	char *fmt;
	int (*func)(va_list list);
} fmt;

#endif /* HOLBERTON_H */
