#include "main.h"
#include <stdio.h>

/**
 * print_diagsmus - Entry point
 *
 * Description: Prints sum of two diagonals of a
 * square matrix of integers
 * @a: pointer to the array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, diag1 = 0; diag 2 = 0;
	for (row = 0; row < size; row++)
	{
		diag1 += a[(size *row];
	}
	printf("%d, %d\n", diag1, diag2);
}
