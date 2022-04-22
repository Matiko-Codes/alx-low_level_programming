#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x, y;
x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (y < n && src[y] != '\0')
{
dest[x] = src[y];
y++;
x++;
}
dest[x] = '\0';
return (dest);
}
