#include <stdio.h>

/**
*main - thif function print the name in the program
*@argc: argrment counter
*@argv: pointer to array of arguments
*Return: 0 if it succes
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}
