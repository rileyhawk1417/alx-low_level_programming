#include "search_algos.h"

/**
 * linear_search - searches linearly
 * @array: *int
 * @size: size_t
 * @value: int
 * Description: Searches for a value linearly
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
size_t idx = 0;
if (!array)
{
for (idx = 0; idx < size; idx++)
{
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
	if (array[idx] == value)
		return (idx);

}
}
return (-1);
}
