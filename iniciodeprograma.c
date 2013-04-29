#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cadastro(){

typedef struct cadastroProdutos{

         int codprod;
         float valorprod;
         char nomeprod[15];

}cadprodutos;

                   int x = 0, sair = 1;
       cadprodutos produto[x];//Declaração de variaveis da funcao cadastro.

   while(sair == 1){

       system("cls");
       printf("\n____________________M&R - CADASTRO DE PRODUTOS____________________\n\n");

         printf("CODIGO DO PRODUTO: ");
           scanf("%d", &produto[x].codprod);

           printf("VALOR UNITARIO DO PRODUTO: ");
             scanf("%f", &produto[x].valorprod);

             printf("IDENTIFICACAO DO PRODUTO: ");
               scanf("%s", &produto[x].nomeprod);

               printf("\nPRODUTO CADASTRADO COM SUCESSO!\n\n");

        printf("DESEJA CADASTRAR OUTRO PRODUTO?\n");
           printf("[1] - SIM       [2] - NAO\n");
             scanf("\n%d", &sair);

             if(sair == 1){
                produto[x] = produto[x+1];
             }else{
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
