#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
    int (*f)(int, int);
    int num1, num2, res;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    f = get_op_func(argv[2]);
    if (f == NULL)
    {
        printf("Error\n");
        exit(99);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    res = f(num1, num2);
    printf("%d\n", res);
    return (0);
}