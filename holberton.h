#endif HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * fmt - struct f_index type
 * struct formats - functions for printf
 * @index: index by function
 * @func: pointer to function - funtion print
 */
typedef struct formats
{
	char *index;
	int (*func)(va_list arg);
} fmt;

#endif /* HOLBERTON_H */
