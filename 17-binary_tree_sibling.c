#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: Ptr 2 the node 2 find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         else - a ptr to the sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
