//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct nodo {
//    char data;
//    struct nodo *link;
//} *ptr;
//
//typedef struct {
//    ptr inicio;
//    ptr fim;
//} fila;
//
//void create(fila *f) {
//    f->inicio = NULL;
//    f->fim = NULL;
//}
//
//int isempty(fila f) {
//    return f.inicio == NULL;
//}
//
//void store(fila *f, char elem) {
//    ptr novo = malloc(sizeof(struct nodo));
//    novo->data = elem;
//    novo->link = NULL;
//    if (f->fim != NULL) {
//        f->fim->link = novo;
//    } else {
//        f->inicio = novo;
//    }
//    f->fim = novo;
//}
//
//char retrieve(fila *f) {
//    if (isempty(*f)) {
//        printf("Fila vazia\n");
//        return '\0';
//    }
//    ptr aux = f->inicio;
//    char valor = aux->data;
//    f->inicio = aux->link;
//    if (f->inicio == NULL) {
//        f->fim = NULL;
//    }
//    free(aux);
//    return valor;
//}
//
//void destroy(fila *f) {
//    while (!isempty(*f)) {
//        retrieve(f);
//    }
//}
//
//void exibeFila(fila f) {
//    ptr temp = f.inicio;
//    while (temp != NULL) {
//        printf("%c", temp->data);
//        temp = temp->link;
//    }
//    printf("\n");
//}
//
//int main() {
//    fila f;
//    create(&f);
//
//    store(&f, 'C');
//    store(&f, 'A');
//    store(&f, 'D');
//    store(&f, 'E');
//
//    printf("Conteúdo da fila: ");
//    exibeFila(f);
//
//    printf("Elemento removido: %c\n", retrieve(&f));
//
//    printf("Após remoção: ");
//    exibeFila(f);
//
//    if (isempty(f)) {
//        printf("Fila está vazia\n");
//    } else {
//        printf("Fila não está vazia\n");
//    }
//
//    destroy(&f);
//    printf("Fila destruída\n");
//
//    return 0;
//}
