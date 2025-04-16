//
//  main.c
//  Aula C
//
//  Created by Pedro Henrique Freire de Oliveira on 19/03/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    typedef struct lista{
        char letra;
        struct lista *link;
    } *ptr;
    
    ptr lista = malloc(sizeof(struct lista));
    lista->letra = 'P';
    
    ptr aux = malloc(sizeof(struct lista));
    lista->link = aux;
    
    aux->letra = 'E';
    aux->link = malloc(sizeof(struct lista));
    aux = aux->link;
    
    aux->letra = 'D';
    aux->link = malloc(sizeof(struct lista));
    aux = aux->link;
    
    aux->letra = 'R';
    aux->link = malloc(sizeof(struct lista));
    aux = aux->link;
    
    aux->letra = 'O';
    aux->link = NULL;
    
    ptr print = lista;
    while(print != NULL){
        printf("%c", print->letra);
        print = print->link;
    }
    printf("\nNome chegou ao fim\n");
    
    return 0;
}
