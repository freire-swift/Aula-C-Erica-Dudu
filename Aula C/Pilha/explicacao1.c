////
////  explicacao1.c
////  Aula C
////
////  Created by Pedro Henrique Freire de Oliveira on 03/05/25.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct nodo{
//    int data;
//    struct nodo *link;
//} *ptr;
//
//void create(ptr *pilha){
//    *pilha = NULL;
//    printf("pilha inicializada\n");
//}
//
//int isEmpty(ptr pilha){
//    return pilha == NULL;
//}
//
//void push(ptr *pilha, int elem){
//    ptr novo = malloc(sizeof(struct nodo));
//    novo->data = elem;
//    novo->link = *pilha;
//    
//    *pilha = novo;
//    printf("Adicionado %d\n", elem);
//}
//
//int pop(ptr *pilha){
//    if(isEmpty(*pilha)){
//        printf("pilha vazia\n");
//        exit(0);
//    }
//    
//    ptr aux = *pilha;
//    int num = (*pilha)->data;
//    printf("Removido %d\n", (*pilha)->data);
//    *pilha = aux->link;
//    free(aux);
//    return num;
//}
//
//int top(ptr *pilha){
//    if(isEmpty(*pilha)){
//        printf("A pilha está vazia\n");
//        exit(0);
//    }
//    printf("%d\n", (*pilha)->data);
//    return 0;
//}
//
//void destroy(ptr *pilha){
//    ptr temp;
//    while (*pilha != NULL) {
//        temp = *pilha;
//        *pilha = (*pilha)->link;
//        free(temp);
//    }
//    printf("Pilha destruida\n");
//}
//
//int main (){
//    
//    ptr pilha;
//    create(&pilha);
//    
//    push(&pilha, 10);
//    push(&pilha, 20);
//    top(&pilha);
//    pop(&pilha);
//    top(&pilha);
//    destroy(&pilha);
//    top(&pilha);
//    
//    return 0;
//}
