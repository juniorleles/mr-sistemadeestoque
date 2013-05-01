#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct cadastroProdutos{

         int codprod;
         float valorprod;
         char nomeprod[15];

}cadprodutos;

int x = 0;


void cadastro(){
                int sair = 1, i = 0;
       cadprodutos produto[x];//Declaração de variaveis da funcao cadastro.

   while(sair == 1){

       system("cls");
       printf("\n____________________M&R - CADASTRO DE PRODUTOS____________________\n\n");


          printf("VALOR DE X:%d\n", x);

         printf("CODIGO DO PRODUTO: ");
           scanf("%d", &produto[x].codprod);

           printf("VALOR UNITARIO DO PRODUTO: ");
             scanf("%f", &produto[x].valorprod);

             printf("IDENTIFICACAO DO PRODUTO: ");
               scanf("%s", &produto[x].nomeprod);
                x++;
               printf("\nPRODUTO CADASTRADO COM SUCESSO!\n\n");

           for(i = 0; i < x; i++){
               printf("CODIGO DO PRODUTO: %d\n", produto[i].codprod);
                 printf("VALOR UNITARIO DO PRODUTO: %.2f\n", produto[i].valorprod);
             printf("IDENTIFICACAO DO PRODUTO: %s\n", produto[i].nomeprod);
             }

        printf("DESEJA CADASTRAR OUTRO PRODUTO?\n");
           printf("[1] - SIM       [2] - NAO\n");
             scanf("\n%d", &sair);

             if(sair == 2){
                  main();
               }
             }
}//final da funcao cadastro de produtos.




int main(){

         int opprincipal = 0;

         system("cls");
         system("color 47");

    while(opprincipal == 0){
         printf("\n____________________M&R - SISTEMA DE ESTOQUE E RELATORIOS____________________\n\n\n");
            printf("O QUE DESEJA FAZER?\n\n");
               printf("[1] - CADASTRAR PRODUTO   "
                      "[2] - SAIR\n\n");
                      scanf("%d", &opprincipal);

        if(opprincipal == 1){
            cadastro();

        }else{
               exit;
             }
}


}
