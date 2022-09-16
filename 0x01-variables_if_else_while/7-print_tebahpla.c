#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - entry point
*Description - print alphabet backwards
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; --ch)
		putchar(ch);
	putchar('\n');
	return (0);
}
