#include "holberton.h"

/**
 * func_rot13 - encodes a string using rot13.
 * @list: the list of arguments the funcion id receiving
 * Return: count characters
 */
int func_rot13(va_list list)
{
	int i = 0, j = 0, count = 0;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;

	s = va_arg(list, char *);

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; arr1[j] != 0; j++)
		{
			if (s[i] == arr1[j])
			{
				count++;
				_putchar(arr2[j]);
				break;
			}
			else if (arr1[j + 1] == 0)
			{
				_putchar(s[i]);
				count++;
			}
		}

	}
	return (count);
}
