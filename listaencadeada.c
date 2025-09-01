#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct node no ;

struct node {
    Item item;
    struct node *prox;
};

typedef struct head cabeca ;

struct head {
    int num_intens;
    no *prox;
    no *ultimo;
};

cabeca * criar_lista () ;