/*
 * File: 101-quote.c
 */

#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: 1.
 */
int main(void)
{
	write("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}	
