#include <stdio.h>
#include <time.h>
#include <time.h>
/**
 *main - Entry point of the program
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
  char lower;
  for  (lower = 'z'; lower >= 'a'; lower--)
    putchar(lower);
  putchar('\n');
  return (0);
}
