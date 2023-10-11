#include "search_algos.h"
#include <math.h>

/**
 * binary_search - searches using the lowest & highest
 * @array: *int
 * @size: size_t
 * @value: int
 * Description: Searches for value position in a binary way
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
size_t idx = 0;
int left = 0, right = size - 1;
int middle = 0;
if (!array)
{
while (left <= right)
{
middle = left + (right - left) / 2;
printf("Searching in array: ");
	for (idx = left; idx < right; idx++)
		printf("%d, ", array[idx]);

printf("%d\n", array[idx]);

if (array[middle] == value)
	return (middle);

if (array[middle] < value)
	left = middle + 1;
else
	right = middle - 1;

}
}

return (-1);
}
