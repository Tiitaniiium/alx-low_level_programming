#include "main.h"
#include <stdio.h>

/**
* more_numbers - function prints 10 times the numbers, from 0 to 14
* _putchar only 3 times
* Return: returns void
*/

void more_numbers(void)
{
	int i, j;

	for (j == 0; j < 10; j++)
	{
		for (i == 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
