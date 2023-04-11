#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

typedef struct lista Lista;

Lista *criar_lista();

void inserir_no_inicio(Lista *lista, int valor);

void inserir_no_final(Lista *lista, int valor);

void remover_no_inicio(Lista *lista);

void remover_no_final(Lista *lista);

void buscar_no_inicio(Lista *lista);

void buscar_no_final(Lista *lista);

void buscar_valor();

void imprimir_cabeca(Lista *lista);

void imprimir_cauda(Lista *lista);

