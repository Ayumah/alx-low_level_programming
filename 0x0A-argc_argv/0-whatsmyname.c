#include "main.h"
#include <stdio.h>
/**
 * main -  functio that writes its name
 * @argc: a count of the arguments supplied to the program
 * @argv: array of pointers to the strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
