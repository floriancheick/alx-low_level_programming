#include <stdio.h>
#include "main.h"

/**
*main - This function print the number of argument that should be passed in the program
*@argc: argument counter
*@argv: Pointer to array of arguments
*Return: 0 if it succed
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
printf("%d\n", argc - 1);

return (0);
}
