#include <stdio.h>
/**
 * main - C program that prints new line to std error
 *
 * Return: 1
*/
int main(void)
{
	char line[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, line, 59);
	return (1);
}
