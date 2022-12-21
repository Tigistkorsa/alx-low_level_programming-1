#include "main.c"

/**
 * _strcat- function that concatenates two strings
 * @dest: appends the string
 * @src:concatenated string
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src);
{
char  s1[20] = "src";
char s2[] = "dest";
strcat(s1, s2);
put(s1);
put(s2);
}
