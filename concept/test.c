#include <unistd.h>
#include <stdio.h>
#include "process.h"

/**
 * main - Entry point for my program
 *
 * Return: On success, it returns 0.
 * On error, it returns 1
 */
int main(void)
{
	int id = fork();
	int n, i;

	if (id == 0)
		n = 1;
	else
		n = 6;
	for (i = n; i < n + 5; i++)
		printf("%d\n", i);
	return (0);
}
