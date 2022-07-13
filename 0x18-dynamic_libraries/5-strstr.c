#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: other string
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, start;
for (i = 0; *(haystack + i); i++)
{
start = i;
for (j = 0; (*(haystack + i) == *(needle + j) &&
*(haystack + i) && *(needle + j)); j++, i++)
continue;
if (*(needle + j) == '\0')
return (haystack += start);
i = start;
}
return (0);
}
