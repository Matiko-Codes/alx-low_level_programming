#include "main.h"
/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */
void puts_half(char *str)
{
int x, last;
x = 0;
while (str[x] != '\0')
{
x++;
}
last = (x + 1) / 2;
for (x = last; str[x]; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
