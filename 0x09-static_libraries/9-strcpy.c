#include "main.h"
/**
 *_strcpy - copies the string pointed to by src
 *@dest: A pointer to a char that will be changed
 *@src: A pointer to a char that will be changed
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int x;
x = 0;
while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';
return (dest);
}
