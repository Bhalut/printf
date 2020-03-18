#include "holberton.h"

/**
 * func_rot13 - encodes a string using rot13.
 * @list: the list of arguments the funcion id receiving
 * Return: count characters
 */
int func_rot13(va_list list)
{
	int i = 0, j = 0, count = 0;
	char *arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *arr_rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;

	s = va_arg(list, char *);
	for (i = 0; s[i]; i++)
	{
		for (j = 0; arr[j]; j++)
		{
			if (s[i] == arr[j])
			{
				s[i] = arr_rot[j];
				count++;
				break;
			}
		}
		_putchar(s[i]);
	}

	return (count);
}
