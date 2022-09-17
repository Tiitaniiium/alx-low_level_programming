#include "main.h"

/**
*_isupper - would confirm if a character us uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
