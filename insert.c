#include "header.h"
// Structure for each item in stock

// Function to create a new item
Item *newItem(char *name, int quantity) {
    Item *item = (Item *)malloc(sizeof(Item));
    strcpy(item->name, name);
    item->quantity = quantity;
    item->left = NULL;
    item->right = NULL;
    return item;
}

// Function to insert a new item into the stock BST
Item *insert(Item *root, char *name, int quantity) {
    if (root == NULL)
        return newItem(name, quantity);

    if (strcmp(name, root->name) < 0)
        root->left = insert(root->left, name, quantity);
    else if (strcmp(name, root->name) > 0)
        root->right = insert(root->right, name, quantity);
    else
        root->quantity += quantity;

    return root;
}

