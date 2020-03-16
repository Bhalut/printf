#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * fmt - struct f_index type
 * struct formats - functions for printf
 * @index: index by function
 * @func: pointer to function - funtion print
 */
typedef struct format
{
	char *fmt;
	int (*func)(va_list list);
} fmt;

#endif /* HOLBERTON_H */
