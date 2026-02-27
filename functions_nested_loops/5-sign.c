#include "main.h"

/**
 * print_sign - print a sign
 *
 * @n: The number we check
 *
 * Return: 1 if n is + than zero, 0 if n is = zero and -1 if n is - than zero
 */

int print_sign(int n)

{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
