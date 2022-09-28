#include "main.h"

/**
*_puts_recursion - This function print a string following a new line
*@s: Input string to print
*Return: Nothing
*/

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
