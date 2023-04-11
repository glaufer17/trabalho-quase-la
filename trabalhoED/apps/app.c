#include "include.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
    printf("\n\t--- Deque como Vetor ---\n\n");
    
    Lista *lista = criar_lista();

    int opcao = 0, valor = 0;

   do{
         printf("\n\t0 - Sair \n\t1 - Inserir no Inicio \n\t2 - Inserir no Final \n\t3 - Remover no Inicio \n\t4 - Remover no Final \n\t5 - Buscar no Inicio \n\t6 - Buscar no Final \n\t7 - Imprimir do Inicio/Final \n\t8 - Imprimir do Final/Inicio\n");
         scanf("%d", &opcao); 

         switch (opcao)
         {
         case 1:
            //inserir_no_inicio();
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(lista, valor);
            break;
         case 2:
            //inserir_no_final();
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(lista, valor);
            break;
         case 3:
            //remover_no_inico();
            remover_no_inicio(lista);
            break;
         case 4:
            //remover_no_final();
            remover_no_final(lista);
            break;
         case 5:
            //buscar_no_inicio();
            buscar_no_inicio(lista);
            break;
        case 6:
            //buscar_no_final();
            buscar_no_final(lista);
            break;
         case 7:
            //imprimir_asc();
            imprimir_cabeca(lista);
            break;
        case 8:
            //imprimir_desc();
            imprimir_cauda(lista);
            break;
         
         default:
            break;
         }
     }while(opcao != 0);
     
   return 0;

}