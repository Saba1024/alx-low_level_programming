#include<stdio.h>
/**
 * main - Prints the sizeof many var types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	prinf("Size of a char: %d byte(s)\n", sizeof(a));
	prinf("Size of an int: %d byte(s)\n", sizeof(b));
	prinf("Size of a long int: %d byte(s)\n", sizeof(c));
	prinf("Size of a long long int: %d byte(s)\n", sizeof(d));
	prinf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
