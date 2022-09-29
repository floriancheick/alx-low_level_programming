#include "main.h"

/**
* _strlen - return length of string
* @str: string
*
* Return: length of str
*/
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}

/**
* check_palindrome - checks to see if the string is a palindrome
* @a: left index
* @b: right index
* @c: possible palindrome
*
* Return: 1 if palindrome 0 if not
*/
int check_palindrome(int a, int b, char *c)
{
if (a >= b)
return (1);
else if (c[a] != c[b])
return (0);
else
return (check_palindrome(a + 1, b - 1, c));
}

/**
* is_palindrome - if a string is a palindrome
* @s: string to check
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
int i;

i = _strlen(s) - 1;
return (check_palindrome(0, i, s));
}
