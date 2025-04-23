////
////  main.c
////  Aula C
////
////  Created by Pedro Henrique Freire de Oliveira on 19/03/25.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct nodo {
//    char data;
//    struct nodo *prev;
//    struct nodo *prox;
//} *ptr;
//
//int main(int argc, const char * argv[]) {
//   
//    ptr lista = malloc(sizeof(struct nodo));
//    lista->data = 'A';
//    lista->prev = NULL;
//
//    ptr aux = malloc(sizeof(struct nodo));
//    aux->data = 'L';
//    aux->prev = lista;
//    lista->prox = aux;
//
//    ptr novo = malloc(sizeof(struct nodo));
//    novo->data = 'U';
//    novo->prev = aux;
//    aux->prox = novo;
//    aux = novo;
//
//    novo = malloc(sizeof(struct nodo));
//    novo->data = 'C';
//    novo->prev = aux;
//    aux->prox = novo;
//    aux = novo;
//
//    novo = malloc(sizeof(struct nodo));
//    novo->data = 'A';
//    novo->prev = aux;
//    aux->prox = novo;
//    aux = novo;
//
//    novo = malloc(sizeof(struct nodo));
//    novo->data = 'R';
//    novo->prev = aux;
//    aux->prox = novo;
//    aux = novo;
//
//    novo = malloc(sizeof(struct nodo));
//    novo->data = 'D';
//    novo->prev = aux;
//    aux->prox = novo;
//    aux = novo;
//
//    printf("Ordem normal\n");
//    ptr temp = lista;
//    while (temp != NULL)
//    {
//        printf("%c", temp->data);
//        if (temp->prox == NULL) break;
//        temp = temp->prox;
//    }
//    
//    printf("\nOrdem inversa\n");
//    while (temp != NULL)
//    {
//        printf("%c", temp->data);
//        temp = temp->prev;
//    }
//
//
//    return 0;
//    
//}
