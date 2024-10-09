#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

// Opretter og initialiserer en ny linked list
LinkedList createList() {
    LinkedList list;
    list.head = NULL;
    list.tail = NULL;
    return list;
}

// Tilføjer en ny node til slutningen af listen
void addNode(LinkedList *list, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = list->tail;

    if (list->tail) {
        list->tail->next = newNode;
    }
    list->tail = newNode;

    if (!list->head) {
        list->head = newNode;
    }
}

// Fjerner en node fra listen
void removeNode(LinkedList *list, Node *node) {
    if (!node) return;

    if (node->prev) {
        node->prev->next = node->next;
    } else {
        list->head = node->next;
    }

    if (node->next) {
        node->next->prev = node->prev;
    } else {
        list->tail = node->prev;
    }

    free(node);
}

// Finder en node med specifik data
Node* findNode(LinkedList *list, int data) {
    Node *current = list->head;
    while (current) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// Udskriver alle elementer i listen
void printList(LinkedList *list) {
    Node *current = list->head;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}