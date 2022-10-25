#include<stdio.h>
/**
 * main - Prints the sizeof many var types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	prinf("Size of a char: %lu byte(s)\n", sizeof(char));
	prinf("Size of an int: %lu byte(s)\n", sizeof(int));
	prinf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	prinf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	prinf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
