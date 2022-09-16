#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Description - print alphabet in lowercase and uppercase with a line
*/
int main(void)
{

	char ch; /* ch is for lowercase alphabet */
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar("%c", ch);
	char Ch; /* Ch is for uppercase alphabet */
	for (Ch = 'A'; Ch <= 'Z'; Ch++)
	putchar("%c", Ch);
		putchar('\n');
	return 0;
}
