#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *_printstring - function that print a string
 *@s: pointer to value of each simbol of string
 *Return: counter.
 */
int _printstring(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}

/**
 * print_unsig - print unsigned numbers
 * @n: number to print
 * Return: @count, number or chars printed.
 */
int print_unsig(unsigned int n)
{
	int count = 0;
	unsigned int num_copy = n;

	if (n == 0)
		count = 1;
	while (num_copy != 0)
	{
		num_copy = num_copy / 10;
		count++;
	}
	if (n >= 10)
		print_unsig(n / 10);
	_putchar (n % 10 + '0');
	return (count);
}

/**
 * print_number - printing numbers with putchar (Thanks Daniel "El profe")
 * @n: number to print
 * Return: no return.
 */
int print_number(int n)
{
	unsigned int a, b, c, d, f;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		count++;
	}
	b = n;
	c = 1;
	for (a = 1 ; b > 9 ; a++)
	{
		b = b / 10;
		c = c * 10;
	}
	for (f = 1; f <= a; f++)
	{
		d = n / c;
		n = n % c;
		c = c / 10;
		_putchar(d + '0');
		count++;
	}
	return (count);
}
