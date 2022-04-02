#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments print in the programm
 * @argc: print number of arguments
 * @argv: print array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
