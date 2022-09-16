#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Description - print alphabet in lowercase and uppercase with a line
*/
int main(void)
{
	/* print lowercase letter */
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar("%c", ch);
	
	/* print lowercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar("%c", ch);
	putchar('\n');
	return 0;
}
