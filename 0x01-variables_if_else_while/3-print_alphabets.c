#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - Entry point
*Result: 0
*/
int main(void)
{
	char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	/* print lowercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
