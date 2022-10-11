#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 *find_sqrt - finds the natural square root of an inoutted number.
 *@num: the number to find the square root of.
 *@root: the root to be used.
 *
 * Return: if the number has a natural square root -the square root.
 *	   if the number does not have a natural square roo - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: the number to be considered.
 *Return: natural square of the number.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
