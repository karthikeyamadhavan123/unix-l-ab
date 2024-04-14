#include "header.h"



// Function to print the items in the stock BST (inorder traversal)
void printStock(Item *root) {
    if (root != NULL) {
        printStock(root->left);
        printf("%s - Quantity: %d\n", root->name, root->quantity);
        printStock(root->right);
    }
}
