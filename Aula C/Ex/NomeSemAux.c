// exercicio sem AUX

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    typedef struct lista{
        char letra;
        struct lista *link;
    } *ptr;
    
    ptr lista = malloc(sizeof(struct lista));
    lista->letra = 'P';
    
    lista->link = malloc(sizeof(struct lista));
    lista->link->letra = 'E';
    
    lista->link->link = malloc(sizeof(struct lista));
    lista->link->link->letra = 'D';
    
    lista->link->link->link = malloc(sizeof(struct lista));
    lista->link->link->link->letra = 'R';
    
    lista->link->link->link->link = malloc(sizeof(struct lista));
    lista->link->link->link->link->letra = 'O';
    
    lista->link->link->link->link->link = NULL;
    
    ptr print = lista;
    while(print != NULL){
        printf("%c", print->letra);
        print = print->link;
    }
    printf("\nNome chegou ao fim\n");
    
    return 0;
}
