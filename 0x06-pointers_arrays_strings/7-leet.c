#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * 
 * Return: A pointer to the encoded string.
 */
char *leet(char *)
{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char tr[5] = {'4', '3', '0', '7', '1'};

while (x[a])
{
b = 0;
while (b < l)
{
if (x[a] == tr[b] || x[a] - 32 == tr[b])
x[a] = trw[b];
b++;
}
a++;
}
return (x);
}
