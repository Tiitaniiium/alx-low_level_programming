#include <stdio.h>

/**
*main - Entry point
*Description - print alphabet in lowercase and uppercase with a line
*/
int main(void)
{
	// ch is alphabet in lowercase
	// Ch is alphabet in Uppercase
	char ch; Ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar("%c", ch);
	for (Ch = 'A'; Ch <= 'Z'; Ch++)
	putchar("%c", Ch);
		putchar('\n');
	return 0;
}
