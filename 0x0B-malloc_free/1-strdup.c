#include "main.h"

/**
 * length - find length of string
 *@string: id string
 *Return: int (length).
 */

int length(char *string)
{

int len = 0;

while (string[len] != '\0')
{
	++len;
}


return (len);
}

/**
 * _strdup - allocate memory for given string
 *@str: is the string
 *
 *Return: pointer to allocated memory.
 */

char *_strdup(char *str)
{
if (str == NULL)
{return (NULL);}

int a = length(str);
char *A = (char *)malloc(sizeof(char) * (a + 1));

if (a <= 0)
{

return (NULL);
}


a = 0;

while (str[a] != '\0')
{
A[a] = str[a];
++a;
}

return (A);
}

