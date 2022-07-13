#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
int l_dest, l_src;
l_dest = 0;
l_src = 0;
while (*(dest + l_dest))
l_dest++;
while (*(src + l_src) && l_src < n)
{
*(dest + (l_dest + l_src)) = (*(src + l_src));
l_src++;
}
return (dest);
}
