#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Recursively compute the height of the left subtree */
	height_left = binary_tree_height(tree->left);

	/* Recursively compute the height of the right subtree */
	height_right = binary_tree_height(tree->right);

	/* Return the max height of the left and right subtrees, plus +1) */
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
