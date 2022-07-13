#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: compare segment
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, f;
unsigned int l = 0;
for (i = 0; *(s + i); i++)
{
f = 0;
for (j = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
{
l++;
f = 1;
break;
}
}
if (f == 0)
{
return (l);
}
}
return (l);
}
