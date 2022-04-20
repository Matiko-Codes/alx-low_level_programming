#include "main.h"
/**
*_puts - prints a string
*@str: A pointer to an int that will be changed
*
*Return: void which means our answer is correct
*/
void _puts(char *str)
{
char *c;
int y;

c = str;
for (y = 0; c[y]; y++)
{
_putchar (c[y]);
}
_putchar ('\n');
}
