#include <stdio.h>

/**
* main - This function print each argument that passed to the program line
* @argc: argument counter
* argv: pointer to array of arguments
* Return: 0 when it succed
*/

int main(int argc, char *argv[])
{

int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
