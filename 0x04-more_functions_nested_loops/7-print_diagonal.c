#include "main.h"

/**
 * print_line - function that print a diagonal line
 * @n:the number of times the character \ should be printed
 * Return: diagonal line
 */

void print_line(int n)
{
int a = 0;

while (a < n && n > 0)
{
_putchar('_');
a++;
}
_putchar('\n');
}
