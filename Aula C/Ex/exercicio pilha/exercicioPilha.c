#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    char data;
    struct nodo *link;
} *ptr;

void create(ptr *lista){
    *lista = NULL;
}

int isempty(ptr lista){
    return lista == NULL;
}

void push(ptr *lista, char elem){
    ptr aux = malloc(sizeof(struct nodo));
    aux->data = elem;
    aux->link = *lista;
    *lista = aux;
}

void pop(ptr *lista){
    if (*lista != NULL) {
        ptr aux = *lista;
        *lista = aux->link;
        free(aux);
    }
}

char top(ptr lista) {
    if (lista != NULL) {
        return lista->data;
    } else {
        printf("Pilha vazia\n");
        return '\0';
    }
}

void destroy(ptr *lista) {
    while (*lista != NULL) {
        pop(lista);
    }
}

void exibeLista(ptr lista){
    while (lista != NULL) {
        printf("%c", lista->data);
        lista = lista->link;
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    ptr pilha;
    create(&pilha);

    push(&pilha, 'E');
    push(&pilha, 'D');
    push(&pilha, 'A');
    push(&pilha, 'C');

    printf("Conteúdo da pilha: ");
    exibeLista(pilha);

    printf("Topo da pilha: %c\n", top(pilha));

    pop(&pilha);

    printf("Após pop: ");
    exibeLista(pilha);

    if (isempty(pilha)) {
        printf("Pilha está vazia\n");
    } else {
        printf("Pilha não está vazia\n");
    }

    destroy(&pilha);
    printf("Pilha destruída\n");

    return 0;
}
