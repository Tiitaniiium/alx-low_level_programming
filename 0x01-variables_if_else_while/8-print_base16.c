#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Return: 0
*/
int main(void)
{
	int N;

	for (N = '0'; N <= '9'; N++)
	{
		putchar(N);
	}
	for (N = 'a'; N <= 'f'; N++)
	{
		putchar(N);
	}
		putchar('\n');
	return (0);
}
