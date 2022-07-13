#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
int l_dest, l_src;
l_dest = 0;
l_src = 0;
while (*(dest + l_dest))
l_dest++;
while (*(src + l_src))
{
*(dest + (l_dest + l_src)) = (*(src + l_src));
l_src++;
}
return (dest);
}
