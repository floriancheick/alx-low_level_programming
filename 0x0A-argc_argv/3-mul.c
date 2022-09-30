#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - This function print the argument numbers
* @argc: argument counter
* @argv: numbers to multiply with
* Return: 0 if it succed
*/

int main(int argc, char *argv[])
{

if (argc != 3)
{
printf("Error\n");
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
