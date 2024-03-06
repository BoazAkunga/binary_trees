#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: Ptr 2 the root node of the tree 2 delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
