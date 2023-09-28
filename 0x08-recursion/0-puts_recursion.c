#include"main"
#include <stdio.h>
/**
 *  * main - check the code
 *   *@s:character to be printed
 *    * Return: Always 0.
 */
void _puts_recursion(char *s);
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
