#include "main.h"
#include <string.h>

/**
 * _strlen-> function to get the lenght of a string
 * @S: string pointer to passd to this fucntion
 * Return: return length of the string
 */

int _strlen(char *s)
{
int len;
for(; *s != '\0'; s++)
{
len += 1;
}
return (len);
}
