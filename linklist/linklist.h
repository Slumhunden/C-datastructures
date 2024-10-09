
#ifndef LINKLIST_H
#define LINKLIST_H

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} LinkedList;

// Function declarations
LinkedList createList();
void addNode(LinkedList *list, int data);
void removeNode(LinkedList *list, Node *node);
Node* findNode(LinkedList *list, int data);
void printList(LinkedList *list);

#endif