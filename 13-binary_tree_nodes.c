#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least one child in the binary tree,
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Return 0 if tree is NULL (empty tree) */
	if (tree == NULL)
		return (0);

	/* Check if the current node has at least one child */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	/* If the current node has no child, return 0 */
	return (0);
}
