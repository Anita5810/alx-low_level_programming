#include "main.h"

/**
*_islower - function to check if character is lowercase
*
*@c: checks input of function

Return: returns 1 if 'c' is lowercase
   otherwise always 0 (Succes)
*/

int_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	       return (0);
}
