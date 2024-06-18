#include <stdio.h>

/**
* main - Prints size of various types
*
* Return: Always 0 (Sucess)
*/

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d 4 byte(s)\n", sizeof(long int));
	printf("Size of a float: %d byte(s)\n", sizeof(long long int));
	return (0);
}
