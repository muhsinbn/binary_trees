#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

<<<<<<< HEAD
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	return (right);
=======
	/* Recursively compute the height of the left subtree */
	height_left = binary_tree_height(tree->left);

	/* Recursively compute the height of the right subtree */
	height_right = binary_tree_height(tree->right);

	/* Return the max height of the left and right subtrees, plus +1) */
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
>>>>>>> 4e8f398f9508b53685eb3eafb758c9df7c6f1bac
}
