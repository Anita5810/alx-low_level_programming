#include "main.h"
/**
 * print_alphabet - Prints the alphabeth in lowercase
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabeth(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
_putchar('\n');
}

