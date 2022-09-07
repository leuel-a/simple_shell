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
	if (id == 0)
	{
		printf("Child process\n");
	} else
	{
		printf("Main process\n");
	}
	return (0);
}
