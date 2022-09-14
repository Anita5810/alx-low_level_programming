#include "main.h"

/**
 * print_alphabet_10 - function that will print alphabet 10 times
 *
 * Return: x10 a-z
 */

void print_alphabet_10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	      _putchar('\n');
	}
}
