#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Result: 0
*/
int main(void)
{
	/* print lowercase letter */
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	/* print lowercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
