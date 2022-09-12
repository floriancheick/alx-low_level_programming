#include <stdio.h>
/**
* main - print the string in the function
*
* Description: using the main function
* This program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
  printf("Size of a char: %lu byte(s)\n", sizeof(char));
  printf("Size of an int: %lu byte(s)\n", sizeof(int));
  printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
  printf("Size of a float: %lu byte(s)\n", sizeof(float));
  return (0);
}
