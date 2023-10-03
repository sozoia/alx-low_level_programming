#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array.
 *@size: size of the array.
 *@c: charecter that will be filled on all of the array.
 *Return: pointer.
 */

char *create_array(unsigned int size, char c)
{
unsigned int o =0;
char *A = (char *)malloc(size * sizeof(c));

if (size <= 0)
{
return (NULL);
}

while (o < size)
{
A[o] = c;
++o;

}


return (A);
}
