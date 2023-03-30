#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a given node is root
 * @node: the node to check
 *
 * Return: 1 is node is root otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if(node->parent)
		return (0);
	return (1);
}
