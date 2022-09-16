#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - entry point
*Description - print single digits of base 10 starting from 0
*Return: 0
*/
int main(void)
{
	int x;

	for (x = 0; x < 9; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
