#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: is the int we use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
