#include "main.h"

/**
*factorial - this function return the factorial of a given number
*@n: an integer to print
*Return: The factorial of n
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (n * factorial(n - 1));
}
