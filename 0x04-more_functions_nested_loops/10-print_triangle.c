#include "main.h"
/**
 *print_triangle - prints a diagonal line
 *@n: lenght of triangle
 *
 *return: always 0
 */
void print_triangle(int n)
{
int i;
int j;
int k;

if (n < 1)/*for values below 1*/
{
_putchar('\n');
}

else
{
for (i = 0; i < n; i++)
{

for (k = 0; k < ((n - i) - 1); k++)/*prints the spaces*/
{
_putchar(' ');
}

for (j = 0; j < (n - k); j++)/* prints #'s*/
{
_putchar('#');
}
_putchar('\n');
}
}
}
