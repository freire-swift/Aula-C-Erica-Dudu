#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    char data;
    struct nodo *link;
} *ptr;

typedef struct fila {
    ptr inicio;
    ptr fim;
} Fila;

// Cria fila
void create(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

// Verifica se a fila está vazia
int isEmpty(Fila *f) {
    return f->inicio == NULL;
}

// Insere no final da fila
void store(Fila *f, char elem) {
    ptr aux = malloc(sizeof(struct nodo));
    aux->data = elem;
    aux->link = NULL;

    if (isEmpty(f)) {
        f->inicio = aux;
        f->fim = aux;
    } else {
        f->fim->link = aux;
        f->fim = aux;
    }
}

// Remove do início da fila
char retrieve(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia!\n");
        return '\0';
    }

    ptr auxptr = f->inicio;
    char aux = auxptr->data;
    f->inicio = auxptr->link;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(auxptr);
    return aux;
}

// Libera a memória
void destroy(Fila *f) {
    while (!isEmpty(f)) {
        retrieve(f);
    }
}

// Exibe os elementos da fila
void exibe(Fila f) {
    ptr temp = f.inicio;
    printf("Fila: [ ");
    while (temp != NULL) {
        printf("%c ", temp->data);
        temp = temp->link;
    }
    printf("]\n");
}

int main(void) {
    Fila f;
    create(&f);

    store(&f, 'A');
    exibe(f);

    store(&f, 'B');
    exibe(f);

    store(&f, 'C');
    exibe(f);

    printf("\nRetira: %c\n", retrieve(&f));
    exibe(f);

    printf("Retira: %c\n", retrieve(&f));
    exibe(f);

    printf("Retira: %c\n", retrieve(&f));
    exibe(f);

    printf("Fila vazia? %d\n", isEmpty(&f));

    destroy(&f);
    printf("Fila destruída.\n");

    return 0;
}
