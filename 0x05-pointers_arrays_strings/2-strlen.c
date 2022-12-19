#include "main.h"

/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: len
 */
int _strlen(char *s)
{
int roll, len;
len = 0;
for (roll = 0, s[roll] != '\0'; roll++)
len++;
return (len);

