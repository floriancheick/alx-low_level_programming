#include "main.h"

/**
 * _strlen - returns the length of the string.
 * @s: string
 *
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int i = 0;
	int cont = 0;
	while (s[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
}
