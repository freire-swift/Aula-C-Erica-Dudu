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
//    struct nodo *link;
//} *ptr;
//
////boa pratica de criacao de lista
////altera o ponteiro lista para null
//void create(ptr *lista){
//    *lista = NULL;
//}
//
////verifica se a lista está vazia
//int isempty(ptr lista){
//    return lista == NULL;
//}
//
////insere um elemento no inicio
////cria um ponteiro auxiliar
//void push(ptr *lista, char elem){
//    ptr aux = malloc(sizeof(struct nodo));
//    aux->data = elem;
//    aux->link = *lista;
//    *lista = aux;
//}
//
//void pop(ptr *lista){
//    ptr aux;
//    aux = *lista;
//    *lista = aux->link;
//    free(aux);
//}
//
//char top(ptr lista) {
//    if (lista != NULL) {
//        return lista->data;
//    } else {
//        printf("Pilha vazia\n");
//        return '\0';
//    }
//}
//
//void destroy(ptr *lista) {
//    while (*lista != NULL) {
//        pop(lista);
//    }
//}
//
//void exibeLista(ptr lista){
//    while (lista != NULL) {
//        printf("%c", lista->data);
//        lista = lista->link;
//    }
//}
//
////void insere_fim(ptr *L, char elem){
////    while (*L != NULL) *L = &(*L)->link;
////    *L = malloc(sizeof(struct nodo));
////    (*L)->data = elem;
////    (*L)->link = NULL;
////}
//
//
//int main(int argc, const char * argv[]) {
//    
//    ptr lista;
//    create(&lista);//boa pratica
//   
//    lista = malloc(sizeof(struct nodo));
//    lista->data = 'C';
//    
//    ptr aux = malloc(sizeof(struct nodo));
//    lista->link = aux;
//    
//    aux->data = 'A';
//    aux->link = malloc(sizeof(struct nodo));
//    aux = aux->link;
//
//    aux->data = 'D';
//    aux->link = malloc(sizeof(struct nodo));
//    aux = aux->link;
//
//    aux->data = 'E';
//    aux->link = NULL;
//    
//
//    // Impressão da lista encadeada
//    ptr temp = lista;
//    while (temp != NULL) {
//        printf("%c", temp->data);
//        temp = temp->link;
//    }
//     printf("\n");
//    
//    return 0;
//    
//}
//
