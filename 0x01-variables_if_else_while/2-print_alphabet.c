#include <stdio.h>
#include <stdlib.h>
/**
 * main - Return Alphabet
 * 
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
