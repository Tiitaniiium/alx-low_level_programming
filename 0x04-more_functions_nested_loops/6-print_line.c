#include "main.h"
#include <stdio.h>

/**
*print_line- function draws a straight line in the terminal.
*@n: parameter
*Return: returns nothing
*/

void print_line(int n)
{
while (n-- > 0)
{
putchar('_');
}
putchar('\n');
}
