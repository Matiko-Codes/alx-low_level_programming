#include "main.h"
/**
 * create_array - array that prints a string
 * @size: number elements of array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;
if (size == 0)
{
return (NULL);
}
/*Using malloc to define values*/
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size)
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
