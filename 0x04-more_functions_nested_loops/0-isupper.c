#include "main.h"

/**
*_isupper - would confirm is a character us uppercase or not
*@c: characterto be tested
*Return: 1 whether it is, 0 otherwise
*/

int _supper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	
	return (0);
}
