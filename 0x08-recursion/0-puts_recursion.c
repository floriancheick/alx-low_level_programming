#include "main.h"

/**
*_puts_recursion - This function print a string following a new line
*@s: Input string to print
*Return: Nothing
*/
void _puts_recursion(char *s)
{
if(*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
return 0;
}
