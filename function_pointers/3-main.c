#include "3-calc.h"

/**
* main - does asked operation
* @argc: argument count
* @argv: argument vector
* Return: 0 if sucess, 98 or 99 if failure
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calcul)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calcul = get_op_func(argv[2]);

	if (!calcul)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calcul(num1, num2));
	return (0);
}
