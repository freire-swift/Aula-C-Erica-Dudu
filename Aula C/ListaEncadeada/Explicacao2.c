//
//  main.c
//  Aula C
//
//  Created by Pedro Henrique Freire de Oliveira on 19/03/25.
//

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

void insere(ptr *lista, char elem){
    ptr aux = malloc(sizeof(struct nodo));
    aux->data = elem;
    aux->link = *lista;
    *lista = aux;
}

void rem(ptr *lista){
    ptr aux;
    aux = *lista;
    *lista = aux->link;
    free(aux);
}

void exibeLista(ptr lista){
    while (lista != NULL) {
        printf("%c", lista->data);
        lista = lista->link;
    }
}

void insere_fim(ptr *L, char elem){
    while (*L != NULL) *L = &(*L)->link;
    *L = malloc(sizeof(struct nodo));
    (*L)->data = elem;
    (*L)->link = NULL;
}


int main(int argc, const char * argv[]) {
   
    
    return 0;
    
}
