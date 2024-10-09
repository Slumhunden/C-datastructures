
Dette projekt indeholder en simpel implementering af en dobbelt-hægtet liste (doubly linked list) i C. En dobbelt-hægtet liste er en datastruktur, der består af noder, hvor hver node indeholder en værdi og to pointere: én til den næste og én til den forrige node. Dette gør det muligt at traversere listen i begge retninger.

## Filer

### linklist.h

Denne headerfil definerer de datastrukturer og funktioner, som anvendes til at arbejde med den dobbelt-hægtede liste. Indeholder:

- **Strukturer:**
  - `Node`: Repræsenterer en enkelt node i listen, indeholder data samt pegepinde til næste og forrige node.
  - `LinkedList`: Indeholder pointere til den første (`head`) og den sidste node (`tail`) i listen.

- **Funktionsdeklarationer:**
  - `LinkedList createList()`: Initialiserer en ny, tom linked list.
  - `void addNode(LinkedList *list, int data)`: Tilføjer en ny node med specificeret data til slutningen af listen.
  - `void removeNode(LinkedList *list, Node *node)`: Fjerner en given node fra listen.
  - `Node* findNode(LinkedList *list, int data)`: Finder en node indeholdende den specificerede data.
  - `void printList(LinkedList *list)`: Udskriver alle data i listen til konsollen.

### linklist.c

Denne kildefil indeholder implementeringerne af de funktioner, der blev deklareret i `linklist.h`. Den håndterer alle operationer for at manipulere listen, såsom tilføjelse, fjernelse, søgning og udskrift af noder.

### main.c

Dette er en testfil, der anvender den dobbelt-hægtede liste. Den demonstrerer typisk følgende:

- Oprettelse af en ny linked list.
- Tilføjelse af noder til listen.
- Udskrivning af listen for at vise de tilføjede elementer.
- Finder og fjerner en specifik node fra listen.
- Udskriver listen igen for at vise ændringerne.

## Kompilering og Kørsel

For at kompilere projektet og teste funktionaliteten, kan du bruge følgende kommandoer:

1. **Kompilering:**

   Brug `gcc` til at kompilere kildekoden:

   ```bash
   gcc -o test_linklist main.c linklist.c