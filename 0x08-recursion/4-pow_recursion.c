#include "main.h"

/**
*_pow_recursion - The function return thw value of x raised to the power of y
*@x: intger
*@y: integer
*Return: the functin should -1 or lower than 0
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (x == 0)
return (0);

if (x == 1 || y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
