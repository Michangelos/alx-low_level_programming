#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int cash = 0;

	while (*(s + cash) != '\0')
	{
		if ((*(s + cash) >= 97) && (*(s + cash) <= 122))
			*(s + cash) = *(s + cash) - 32;
		cash++;
	}

	return (s);
}
