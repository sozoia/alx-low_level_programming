#include "main.h"

/**
 * alloc_grid - make tow dimantional array
 *@width: row
 *@height: colomon
 *Return: pointer to pointer.
 */

int **alloc_grid(int width, int height)
{
int **arr = (int **)malloc(height * sizeof(int *) * width);

int a = 0;
int b = 0;

while (a < width)
{
arr[a] = (int *)malloc(height * sizeof(int));
++a;
}

a = 0;
while (a < width)
{

b = 0;
while (b < height)
{

arr [a][b] = 0;
++b;
}

++a;
}

return (arr);
}
