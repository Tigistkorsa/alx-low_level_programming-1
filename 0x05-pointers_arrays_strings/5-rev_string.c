#include "main.h"

/**
 * rev_string - this characters in reverse.
 * @s: this is a parameter to change.
 */
void rev_string(char *s)
{

char tmp;
int i, length1, length2;

length1 = 0;
length2 = 0;

while (s[length1] != '\0')
length++;

length2 = length1 - 1;
for (i = 0; i <  length1 / 2; i++)
{

tmp = s[i];
s[i] = s[length];
s[length2] = tmp;
lenght2 -= 1;

