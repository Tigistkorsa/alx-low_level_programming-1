#include "main.h"

/**
 * rev_string - this characters in reverse.
 * @s: this is a parameter to change.
 */
void rev_string(char *s)
{
int ini = 0, end = 0;
char t;

while (s[end] != 0)
end++;
end--;

while (ini < end)
{
t = s[ini];
s[ini] = s[end];
s[end] = t;
ini++;
end--;
}
