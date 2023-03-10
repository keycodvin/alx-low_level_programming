#include "main.h"

/**
 * _strncpy -  copies to first string with a portion of the other string
 *
 *@dest: first string that is overwritten
 *@src: secong string whom we copy n bytes from to dest
 *@n:number of bytes of src to copy
 *
 *Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

/*this loops starts copying new values to dest*/
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/*adds the null character to last part of string*/
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
