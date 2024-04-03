//main.c:

#include <stdio.h>
#include "unique_functions.h"

int main() {
    Node* head = NULL;
    
    printf("Appending elements to the linked list...\n");
    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    
    printf("Printing the linked list...\n");
    printList(head);
    
    printf("Deleting node with data 20...\n");
    deleteNode(&head, 20);
    
    printf("Printing the updated linked list...\n");
    printList(head);
    
    return 0;
}


