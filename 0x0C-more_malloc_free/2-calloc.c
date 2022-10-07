#include "main.h"

/**
* _calloc - allocates memory for an array
* given number of elements and size
* @nmemb: number of elements
* @size: size of each element
* Return: Null if error, else pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *le;
char *la;
unsigned int index;

if (nmemb == 0 || size == 0)
return (NULL);

le = malloc(size * nmemb);

if (le == NULL)
return (NULL);

la = le;
for (index = 0; index < (size * nmemb); index++)
la[index] = '\0';

return (le);
}
