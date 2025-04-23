#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    char data;
    struct nodo *link;
} *ptr;

void insere(ptr *lista, char elem) {
    ptr aux = malloc(sizeof(struct nodo));
    aux->data = elem;
    aux->link = *lista;
    *lista = aux;
}

char rem(ptr *lista) {
    ptr auxptr = *lista;
    char aux = (*lista)->data;
    *lista = auxptr->link;
    free(auxptr);
    return aux;
}

void exibe(ptr lista) {
    printf("Lista: [ ");
    while (lista != NULL) {
        printf("%c ", lista->data);
        lista = lista->link;
    }
    printf("]\n");
}

// Função A - Conta a quantidade de elementos na lista
int conta(ptr lista) {
    int count = 0;
    while (lista != NULL) {
        count++;
        lista = lista->link;
    }
    return count;
}

// Função B - Soma os valores dos elementos na lista
int soma(ptr lista) {
    int sum = 0;
    while (lista != NULL) {
        sum += lista->data;
        lista = lista->link;
    }
    return sum;
}

int main(void) {
    printf("Cria a lista C A D E...\n");
    ptr lista = NULL;

    printf("\nInclui o E\n");
    insere(&lista, 'E');
    printf("\nInclui o D no inicio\n");
    insere(&lista, 'D');
    printf("\nInclui o A no inicio\n");
    insere(&lista, 'A');
    printf("\nInclui o C\n");
    insere(&lista, 'C');
    printf("\nMostra os elementos da lista: \n");
    exibe(lista);

    printf("\nInclui o I\n");
    insere(&lista, 'I');
    printf("\nMostra os elementos da lista: \n");
    exibe(lista);

    char aux = rem(&lista);
    printf("retirado = %c\n", aux);
    aux = rem(&lista);
    printf("retirado = %c\n", aux);
    aux = rem(&lista);
    printf("retirado = %c\n", aux);
    aux = rem(&lista);
    printf("retirado = %c\n", aux);
    aux = rem(&lista);
    printf("retirado = %c\n", aux);

    // Função A - Conta a quantidade de elementos
    int quantidade = conta(lista);
    printf("Quantidade de elementos na lista: %d\n", quantidade);

    // Função B - Soma dos valores dos elementos
    int soma_lista = soma(lista);
    printf("Soma dos elementos na lista: %d\n", soma_lista);

    return 0;
}
