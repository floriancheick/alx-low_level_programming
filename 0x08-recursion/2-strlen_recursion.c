#include "main.h"

/**
*_strlen_recursion - This functinon return the length of a string
*@s: The input of the string
*
*Return: Length of a string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
