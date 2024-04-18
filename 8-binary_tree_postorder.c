#include "binary_trees.h"

/**
 * binary_tree_postorder - through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description:
 * This function performs post-order traversal of a binary tree.
 * It recursively traverses the left subtree, then the right subtree,
 * and finally processes the current node.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);  /* Traverse the left subtree */
	binary_tree_postorder(tree->right, func); /* Traverse the right subtree */
	func(tree->n); /* Process the current node */
}
