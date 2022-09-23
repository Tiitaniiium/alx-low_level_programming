#include "main.h"
#include <stdio.h>
/**
* print_array - function to print array of integers
* @a: array
* @n: number of elements
*/
void print_array(int *a, int n)
{
	int wic;

	for (wic = 0;  wic < n; wic++)
	if (wic != n - 1)
		printf("%d, ", a[wic]);
	else
		printf("%d", a[wic]);
	_putchar(10);
}
