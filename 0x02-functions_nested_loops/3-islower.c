#include "main.h"
/**
 * _islower - Entry point
 * Description: Desplays characters in lowercase
 * @c: the interger value it receives
 *
 * Return: 1 if true, else 0.
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
