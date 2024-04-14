#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Item {
    char name[50];
    int quantity;
    struct Item *left;
    struct Item *right;
} Item;

Item *newItem(char *name, int quantity);
Item *insert(Item *root, char *name, int quantity);
Item *search(Item *root, char *name);
void printStock(Item *root) ;
