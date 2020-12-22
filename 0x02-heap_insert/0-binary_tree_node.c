#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: Node parent to insert
 * @value: Value to create the new node
 * Return: new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->left = new->right = NULL;

	if (!parent)
	{
		parent = new;
		return (parent);
	}

	if (new->n < parent->n)
	{
		parent->left = new;
		new->parent = parent;
	}

	if (new->n > parent->n)
	{
		parent->right = new;
		new->parent = parent;
	}
	return (new);
}
