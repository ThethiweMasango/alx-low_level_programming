#include "main.h"
/**
 * _print_rev_recursion - Outputs the string in the opp order
 * @s: The string to be displayed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

