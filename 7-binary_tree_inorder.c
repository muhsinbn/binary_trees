#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description:
 * This function performs in-order traversal of a binary tree.
 * It recursively traverses the left subtree, processes the current node,
 * and then recursively traverses the right subtree.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Return if tree or func is NULL */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);
	/* Process the current node */
	func(tree->n);
	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
