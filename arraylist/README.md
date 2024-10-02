# ArrayList Implementation in C

Dette projekt indeholder en implementation af Javas ArrayList-klassen i C. ArrayList'en er en dynamisk liste, der kan vokse og skrumpe efter behov.

## Filer

### arraylist.h

Denne headerfil definerer `ArrayList`-strukturen og deklarerer de offentlige funktioner, der kan anvendes til at manipulere ArrayList'en.

```c
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