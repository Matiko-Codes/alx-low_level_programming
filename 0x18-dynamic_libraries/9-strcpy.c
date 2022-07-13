#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: string
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
for (i = 0; *(src + i); i++)
continue;
for (j = 0; j <= i; j++)
{
*(dest + j) = *(src + j);
}
return (dest);
}
