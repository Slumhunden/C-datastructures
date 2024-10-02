// arraylist.h
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct {
    int *data;
    int capacity;
    int size;
} ArrayList;

// Constructor
ArrayList arraylist();

// Public functions
void alst_add(ArrayList *list, int value);
int alst_get(ArrayList *list, int index);
int alst_size(ArrayList *list);
void alst_remove(ArrayList *list);
void alst_removeIndex(ArrayList *list, int index);
void alst_insertIndex(ArrayList *list, int index, int value);
void alst_set(ArrayList *list, int index, int value);
void alst_clear(ArrayList *list);

#endif // ARRAYLIST_H