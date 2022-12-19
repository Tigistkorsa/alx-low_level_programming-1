#include "main.h"

/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: len
 */


int _strlen(char *s)
{
int len;
for (; *s != '\0'; s++)
{
len += 1;
}
return (len);
}
