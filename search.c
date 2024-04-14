// Function to search for an item in the stock BST
#include "header.h"

Item *search(Item *root, char *name) {
    if (root == NULL || strcmp(root->name, name) == 0)
        return root;

    if (strcmp(name, root->name) < 0)
        return search(root->left, name);
    else
        return search(root->right, name);
}

