// arraylist.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arraylist.h"

#define INITIAL_CAPACITY 10

ArrayList arraylist() {
    ArrayList list;
    list.data = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
    list.capacity = INITIAL_CAPACITY;
    list.size = 0;
    return list;
}

void alst_add(ArrayList *list, int value) {
    if (list->size == list->capacity) {
        list->capacity *= 2;
        list->data = (int *)realloc(list->data, list->capacity * sizeof(int));
    }
    list->data[list->size++] = value;
}

int alst_get(ArrayList *list, int index) {
    if (index < 0 || index >= list->size) {
        fprintf(stderr, "Index out of bounds\n");
        exit(1);
    }
    return list->data[index];
}

int alst_size(ArrayList *list) {
    return list->size;
}

void alst_remove(ArrayList *list) {
    if (list->size > 0) {
        list->size--;
        if (list->size < list->capacity / 2 && list->capacity > INITIAL_CAPACITY) {
            list->capacity /= 2;
            list->data = (int *)realloc(list->data, list->capacity * sizeof(int));
        }
    }
}

void alst_removeIndex(ArrayList *list, int index) {
    if (index < 0 || index >= list->size) {
        fprintf(stderr, "Index out of bounds\n");
        exit(1);
    }
    memmove(&list->data[index], &list->data[index + 1], (list->size - index - 1) * sizeof(int));
    list->size--;
    if (list->size < list->capacity / 2 && list->capacity > INITIAL_CAPACITY) {
        list->capacity /= 2;
        list->data = (int *)realloc(list->data, list->capacity * sizeof(int));
    }
}

void alst_insertIndex(ArrayList *list, int index, int value) {
    if (index < 0 || index > list->size) {
        fprintf(stderr, "Index out of bounds\n");
        exit(1);
    }
    if (list->size == list->capacity) {
        list->capacity *= 2;
        list->data = (int *)realloc(list->data, list->capacity * sizeof(int));
    }
    memmove(&list->data[index + 1], &list->data[index], (list->size - index) * sizeof(int));
    list->data[index] = value;
    list->size++;
}

void alst_set(ArrayList *list, int index, int value) {
    if (index < 0 || index >= list->size) {
        fprintf(stderr, "Index out of bounds\n");
        exit(1);
    }
    list->data[index] = value;
}

void alst_clear(ArrayList *list) {
    free(list->data);
    list->data = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
    list->capacity = INITIAL_CAPACITY;
    list->size = 0;
}