#include "main.h"
#include <stdio.h>

/**
*_puts_recursion - This function print a string following a new line
*@s: Input string to print
*Return: Nothing
*/

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_puts_recursion(s + 1);
putchar(*s);
}
else
putchar('\n');
}
