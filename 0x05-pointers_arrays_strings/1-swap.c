#include "main.h"
#include <stdio.h>

/**
*swap_int - swaps the value of two intergers a and b
*@a : first parameter
*@b : second parameter
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
