
#include "header.h"

int main() {
    Item *stock = NULL;

    // Adding items to the stock
    stock = insert(stock, "Apple", 10);
    stock = insert(stock, "Banana", 15);
    stock = insert(stock, "Orange", 20);
    stock = insert(stock, "Grapes", 25);
    stock = insert(stock, "Pineapple", 30);

    // Printing the current stock
    printf("Current stock:\n");
    printStock(stock);
    printf("\n");

    // Searching for an item in the stock
    char searchItem[50];
    printf("Enter the name of the item you want to search for: ");
    scanf("%s", searchItem);
    Item *result = search(stock, searchItem);
    if (result != NULL)
        printf("%s - Quantity: %d\n", result->name, result->quantity);
    else
        printf("Item not found in stock.\n");

    return 0;
}
