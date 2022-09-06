#include <stdio.h>
#include "process.h"
#include <unistd.h>

/**
 * main - Checks my code
 *
 * Return: On success, it returns 0
 */
int main(void)
{
	pid_t my_ppid;

	my_ppid = _getppid();
	printf("%d\n", my_ppid);
	return (0);
}
