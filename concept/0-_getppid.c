#include <stdio.h>
#include <unistd.h>

/**
 * _getppid - This function gets the PID of the parent process
 *
 * Return: It returns the current parent PID
 */

pid_t _getppid(void)
{
	return (getppid());
}
