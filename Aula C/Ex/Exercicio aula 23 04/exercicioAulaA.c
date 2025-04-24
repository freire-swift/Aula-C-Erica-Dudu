#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    char data;
    struct nodo *link;
} *ptr;

// Insere elemento no topo da pilha
void insere(ptr *lista, char elem) {
    ptr aux = malloc(sizeof(struct nodo));
    aux->data = elem;
    aux->link = *lista;
    *lista = aux;
}

// Remove e retorna o topo da pilha
char rem(ptr *lista) {
    ptr auxptr = *lista;
    char aux = (*lista)->data;
    *lista = auxptr->link;
    free(auxptr);
    return aux;
}

// Exibe os elementos da pilha
void exibe(ptr lista) {
    printf("Pilha: [ ");
    while (lista != NULL) {
        printf("%c ", lista->data);
        lista = lista->link;
    }
    printf("]\n");
}

int main(void) {
    ptr lista = NULL;

    printf("Inclui o E\n");
    insere(&lista, 'E');

    printf("Inclui o D no topo\n");
    insere(&lista, 'D');

    printf("Inclui o A no topo\n");
    insere(&lista, 'A');

    printf("Inclui o C no topo\n");
    insere(&lista, 'C');

    printf("\nExibe a pilha:\n");
    exibe(lista);

    printf("\nInclui o I\n");
    insere(&lista, 'I');
    exibe(lista);

    char aux;
    aux = rem(&lista); printf("Retirado: %c\n", aux);
    aux = rem(&lista); printf("Retirado: %c\n", aux);
    aux = rem(&lista); printf("Retirado: %c\n", aux);
    aux = rem(&lista); printf("Retirado: %c\n", aux);
    aux = rem(&lista); printf("Retirado: %c\n", aux);

    return 0;
}
