#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	int x;

	for(x = '0'; x <= '9'; x++)
		putchar(x);
	putchar(',' );
	putchar('\n');

}