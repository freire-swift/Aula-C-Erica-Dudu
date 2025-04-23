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
//int main(int argc, const char * argv[]) {
//   // insert code here...
//   typedef struct nodo{
//       char data;
//       struct nodo *link;
//   } *ptr;
//   
//   ptr lista = malloc(sizeof(struct nodo));
//   lista->data = 'C';
//   
//   ptr aux = malloc(sizeof(struct nodo));
//   lista->link = aux;
//   
//   aux->data = 'A';
//   aux->link = malloc(sizeof(struct nodo));
//   aux = aux->link;
//
//   aux->data = 'D';
//   aux->link = malloc(sizeof(struct nodo));
//   aux = aux->link;
//
//   aux->data = 'E';
//   aux->link = NULL;
//
//   // Impressão da lista encadeada
//   ptr temp = lista;
//   while (temp != NULL) {
//       printf("%c", temp->data);
//       temp = temp->link;
//   }
//    printf("\n");
//
//   return 0;
//}
