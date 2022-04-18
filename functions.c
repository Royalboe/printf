#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_string - a function that prints a string
 * @str: string  argument
 * Return: number of characters
 */
int print_string(char *str)
{
	int count = 0;
	
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_int - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_int(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			absolute = n * -1;
			_putchar('-');
			count++;
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_int(args));
}
