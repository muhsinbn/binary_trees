#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL, parent is NULL,
 * or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node is NULL or parent is NULL, or left/right child of parent is NULL */
	if (node == NULL || node->parent == NULL ||
	    node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	/* Check if node is the left child of its parent */
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
