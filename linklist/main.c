// main.c
#include <stdio.h>
#include "linklist.h"

int main() {
    LinkedList list = createList();

    // Tilføj nogle elementer
    addNode(&list, 10);
    addNode(&list, 20);
    addNode(&list, 30);

    printf("List efter tilføjelser: ");
    printList(&list);  // Output: 10 20 30 

    // Fjern en node (find den først)
    Node *node = findNode(&list, 20);
    if (node) {
        removeNode(&list, node);
    }

    printf("List efter fjernelse af 20: ");
    printList(&list);  // Output: 10 30

    return 0;
}