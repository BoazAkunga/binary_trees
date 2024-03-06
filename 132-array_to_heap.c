#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap tree from an array
 * @array: Ptr 2 the first element of the array 2 be converted
 * @size: No of elements in the array
 *
 * Return: Ptr 2 the root node of the created Binary Heap
 *         NULL on failure
 */

heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
