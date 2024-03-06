#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a binary search tree.
 * @tree: Ptr 2 the root node of the BST 2 search.
 * @value: Value 2 search for in the BST.
 *
 * Return: If the tree is NULL or the value is not found, NULL.
 *         else, a ptr 2 the node containing the value.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
