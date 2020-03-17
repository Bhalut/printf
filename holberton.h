#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int func_string(va_list);
int func_char(va_list);
int func_percent(void);

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
