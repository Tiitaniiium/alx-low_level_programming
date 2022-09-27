#include "main.h"

/**
 * _memset - this function sets the memory.
 *@s: address to memory block
 *@n: number of memory used
 *@b: char to be used
 *Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
