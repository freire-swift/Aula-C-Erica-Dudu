#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int data;
    struct nodo *link;
} *ptr;

// Letra A: conta quantos elementos tem na lista
int conta(ptr l) {
    int cont = 0;
    while (l != NULL) {
        cont++;
        l = l->link;
    }
    return cont;
}

// Letra B: soma os valores da lista
int soma(ptr l) {
    int total = 0;
    while (l != NULL) {
        total += l->data;
        l = l->link;
    }
    return total;
}

// Letra C: estrutura da fila com início e fim
typedef struct {
    ptr inicio;
    ptr fim;
} fila;

// cria fila vazia
void create(fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

// verifica se a fila está vazia
int isempty(fila f) {
    return f.inicio == NULL;
}

// insere no final da fila
void store(fila *f, int v) {
    ptr novo = malloc(sizeof(struct nodo));
    novo->data = v;
    novo->link = NULL;

    if (f->fim != NULL)
        f->fim->link = novo;
    else
        f->inicio = novo;

    f->fim = novo;
}

// remove do início da fila
int retrieve(fila *f) {
    if (isempty(*f))
        return -1;

    ptr aux = f->inicio;
    int v = aux->data;
    f->inicio = aux->link;
    if (f->inicio == NULL)
        f->fim = NULL;
    free(aux);
    return v;
}

// libera toda a fila
void destroy(fila *f) {
    while (!isempty(*f))
        retrieve(f);
}

// mostra os elementos da fila
void exibeFila(fila f) {
    ptr p = f.inicio;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("\n");
}

// cria uma lista de teste com 3 elementos
ptr criaListaTeste(void){
    ptr l = malloc(sizeof(struct nodo));
    l->data = 5;
    l->link = malloc(sizeof(struct nodo));
    l->link->data = 10;
    l->link->link = malloc(sizeof(struct nodo));
    l->link->link->data = 15;
    l->link->link->link = NULL;
    return l;
}

int main(void){
    // Teste da letra A e B
    ptr lista = criaListaTeste();
    printf("Contagem: %d\n", conta(lista));
    printf("Soma: %d\n", soma(lista));

    // Teste da letra C
    fila f;
    create(&f);
    store(&f, 10);
    store(&f, 20);
    store(&f, 30);

    printf("Fila: ");
    exibeFila(f);

    printf("Saiu: %d\n", retrieve(&f));
    printf("Fila: ");
    exibeFila(f);

    destroy(&f);

    return 0;
}
