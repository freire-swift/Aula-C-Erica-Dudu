//
//  explicacao1.c
//  Aula C
//
//  Created by Pedro Henrique Freire de Oliveira on 03/05/25.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int data;
    struct nodo *link;
} *ptr;

void create(ptr *front,ptr *rear){
    *front = NULL;
    *rear = NULL;
}

int isEmpty(ptr front){
    return front == NULL;
}

void store(ptr *front, ptr *rear, int elem){
    ptr novo = malloc(sizeof(struct nodo));
    novo->data = elem;
    novo->link = NULL;
    
    if (*rear == NULL){
        *front = *rear = novo;
    } else {
        (*rear)->link = novo;
        *rear = novo;
    }
}

int retrieve(ptr *front, ptr *rear){
    if(isEmpty(*front)){
        exit(0);
    }
    
    ptr temp = *front;
    int valor = temp->data;
    *front = (*front)->link;
    if (*front == NULL) {
        *rear = NULL;
    }
    
    free(temp);
    return valor;
}

void destroy(ptr *front, ptr *rear){
    ptr temp;
    while (*front != NULL) {
        temp = *front;
        *front = (*front)->link;
        free(temp);
    }
    *rear = NULL;
}

int main(){
    
    
    
    
    
    
    return 0;
}
