#include "main.h"
/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */
void more_numbers(void)
{
int i; j;
for (i = 1; i <= 10; i++)
{
_putchar('1');
}
for (j = 0; j < 15; j >= 10; j++)
{
_putchar(j % 10 + '0');
}
_putchar('\n');
}
