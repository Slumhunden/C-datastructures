// main.c
#include <stdio.h>
#include "arraylist.h"

int main() {
    ArrayList list = arraylist();

    // Add elements
    alst_add(&list, 10);
    alst_add(&list, 20);
    alst_add(&list, 30);

    // Test size
    printf("Size after adding elements: %d\n", alst_size(&list));  // Output: 3

    // Test get
    printf("Element at index 0: %d\n", alst_get(&list, 0));  // Output: 10
    printf("Element at index 1: %d\n", alst_get(&list, 1));  // Output: 20
    printf("Element at index 2: %d\n", alst_get(&list, 2));  // Output: 30

    // Test set
    alst_set(&list, 1, 50);
    printf("Element at index 1 after setting to 50: %d\n", alst_get(&list, 1));  // Output: 50

    // Test remove
    alst_remove(&list);
    printf("Size after removing last element: %d\n", alst_size(&list));  // Output: 2

    // Test insertIndex
    alst_insertIndex(&list, 1, 40);
    printf("Element at index 1 after inserting 40: %d\n", alst_get(&list, 1));  // Output: 40
    printf("Element at index 2 after inserting 40: %d\n", alst_get(&list, 2));  // Output: 50

    // Test removeIndex
    alst_removeIndex(&list, 1);
    printf("Element at index 1 after removing: %d\n", alst_get(&list, 1));  // Output: 50
    printf("Size after removing index 1: %d\n", alst_size(&list));  // Output: 2

    // Test clear
    alst_clear(&list);
    printf("Size after clearing list: %d\n", alst_size(&list));  // Output: 0

    return 0;
}