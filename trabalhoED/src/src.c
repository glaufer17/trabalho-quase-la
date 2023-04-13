#include "include.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no{
    int dados;
    No *proximo;
    No *anterior;
};

struct lista{
    int tamanho;
    No *cabeca;
    No *cauda;
};

Lista *criar_lista(){

    Lista *lista = (Lista*) malloc(sizeof(Lista));
    lista->tamanho = 0;
    lista->cabeca = NULL;
    lista->cauda = NULL;

    return lista;
}

void inserir_no_inicio(Lista *lista, int valor){

    No *novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    novo->dados = valor;
    novo->anterior = NULL;
    novo->proximo = NULL;

    if(lista->cabeca == NULL){
        lista->cabeca = novo;
        lista->cauda = novo;
    }else{
        novo->proximo = lista->cabeca;
        lista->cabeca->anterior = novo;
        lista->cabeca = novo;
    }
    lista->tamanho = lista->tamanho + 1;

}


void inserir_no_final(Lista *lista, int valor){

    No *novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    novo->dados = valor;
    novo->anterior = NULL;
    novo->proximo = NULL;

    if(lista->cabeca == NULL){
        lista->cabeca = novo;
        lista->cauda = novo;
    }else{

        novo->anterior = lista->cauda;
        lista->cauda->proximo = novo;
        lista->cauda = novo;
    }
    lista->tamanho = lista->tamanho + 1;
}


void remover_no_inicio(Lista *lista){

    No *auxiliar = lista->cabeca;

    lista->cabeca = auxiliar->proximo;
    lista->cabeca->anterior = NULL;
    free(auxiliar);
    lista->tamanho = lista->tamanho -1;
}


void remover_no_final(Lista *lista){

    No *auxiliar = lista->cauda;

    lista->cauda = auxiliar->anterior;
    lista->cauda->proximo = NULL;
    free(auxiliar);
    lista->tamanho = lista->tamanho -1;
}


void buscar_no_inicio(Lista *lista){

    No *atual = lista->cabeca;
    printf("Valor Inicio: %d",atual->dados);
}


void buscar_no_final(Lista *lista){

    No *atual = lista->cauda;
    printf("Valor Inicio: %d",atual->dados);
}


void buscar_valor(Lista *lista, int valor){
    //talvez implementar no final!
}


void imprimir_cabeca(Lista *lista){

    No *atual = lista->cabeca;
    printf("Lista  Cabeca ->  ");
    while (atual != NULL) {
    printf("%d -> ", atual->dados);
    atual = atual->proximo;
    }
    printf(" NULL \n"); 

}


void imprimir_cauda(Lista *lista){ 

    No *atual = lista->cauda;
     printf("Lista Cauda -> ");
     while (atual != NULL) {
       printf("%d -> ", atual->dados);
       atual = atual->anterior;
    }
    printf(" NULL \n"); 
}
