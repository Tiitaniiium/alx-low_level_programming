#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*return: 0
*/
int main(void)
{
	/* print alphabet in lowercase */
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
