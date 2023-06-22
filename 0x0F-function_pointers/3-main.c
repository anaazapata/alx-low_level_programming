#include "3-calc.h"
/**
 * main - contains the main function for op functions
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int(*func)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);

}
