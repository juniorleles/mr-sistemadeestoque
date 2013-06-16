#include <stdio.h>
#define x 100


typedef struct cadastroProdutos
{

    int codprod;
    float valorprod;
    char nomeprod[15];
    int qtdp;

}cadastro;


cadastro produtos[x];
FILE *arquivoP; //arquivo para armazenar os cadastros.
int y = -1;
capax = 0;


void cad();
void imprime();
void maiorpreco();
void precomedio();
void exclui();
void atualiza();
void capa();

void atualiza(){

int i = 0, excod = 0, upd = 0, j = 0, achou;

 system("cls");
    printf("\n____________________M&R - ATUALIZACAO DE PRODUTOS____________________\n\n");

printf("Informe o codigo do produto: ");
scanf("%d", &excod);

achou = 0;

while (i <= y && !achou) {
if (excod == produtos[i].codprod) {
achou = 1; /*Verdadeiro*/

} else {
i++;
}
}
        if(achou){

             printf("\n");
            puts("PRODUTO ENCONTRADO...\n\n");
             printf("COD.: %d      VALOR: %.2f    QTD.: %d\n\n", produtos[i].codprod, produtos[i].valorprod, produtos[i].qtdp);

 printf("ATUALIZAR PRODUTO? [1] SIM   [2] NAO \n");

 scanf("%d", &upd);

 if(upd == 1){
system("cls");
printf("INFORME A NOVA QUANTIDADE:\n");
        scanf("%d", &produtos[i].qtdp);

        printf("NOVO CODIGO DO PRODUTO: ");
        scanf("%d", &produtos[i].codprod);

        printf("NOVO VALOR UNITARIO DO PRODUTO: ");
        scanf("%f", &produtos[i].valorprod);

        printf("NOVA IDENTIFICACAO DO PRODUTO: ");
        fflush(stdin);
        gets(&produtos[i].nomeprod);

        printf("\n");

 printf("PRODUTO ATUALIZADO COM SUCESSO...\n\n");
 system("pause\n");
 main();
 }

 if(upd == 2){
    main();
 }

}else{
              printf("PRODUTO NAO ENCONTRADO!\n");
              system("pause");
              main();

              }
}


void exclui(){
    int i = 0, excod = 0, del = 0, j = 0, achou;

 system("cls");
    printf("\n____________________M&R - EXCLUIR PRODUTO____________________\n\n");

printf("Informe o codigo do produto: ");
scanf("%d", &excod);

achou = 0;

while (i <= y && !achou) {
if (excod == produtos[i].codprod) {
achou = 1; /*Verdadeiro*/

} else {
i++;
}
}
        if(achou){

             printf("\n");
            puts("PRODUTO ENCONTRADO...\n\n");
             printf("COD.: %d      VALOR: %.2f    QTD.: %d\n\n", produtos[i].codprod, produtos[i].valorprod, produtos[i].qtdp);

 printf("EXCLUIR PRODUTO? [1] SIM   [2] NAO \n");

 scanf("%d", &del);

 if(del == 1){
 produtos[y] = produtos[i-1];//exclui o produto na posicao encontrada.
 printf("PRODUTO EXLUIDO COM SUCESSO...\n\n");
 system("pause\n");
 main();
 }

 if(del == 2){
    main();
 }

}else{
              printf("PRODUTO NAO ENCONTRADO!\n");
              system("pause");
              main();

              }
   }

void capa(){
    system("cls");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("\n");
printf("                       _|      _|           _|_|_|    \n");
printf("                       _|_|  _|_|           _|    _| \n");
printf("                       _|  _|  _|     &     _|_|_|    \n");
printf("                       _|      _|           _|    _|\n");
printf("                       _|      _|           _|    _|\n");
printf("                  SISTEMA DE ESTOQUE, VENDAS E RELATORIOS\n\n");
printf("              _|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n");
printf("_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_\n\n\n");

system("pause");
capax = 2;
main();
}

void cad ()
{
    int i=0;
    int op;
    int sair = 1;
    arquivoP = fopen("produtos.txt", "wb");
    if (arquivoP == NULL) {
       printf ("ARQUIVO NAO PODE SER CRIADO!.\n");
       return 1;
    }

  while(sair == 1){
    if (y == x - 1){
        puts("NAO E POSSIVEL CADASTRAR!");
        return;
    }

    y++;
    cadastro prod;
        system("cls");
        printf("\n____________________M&R - CADASTRO DE PRODUTOS____________________\n\n");

       // printf("VALOR DE X: %d\n", x);

        printf("INFORME A QUANTIDADE DO PRODUTO QUE DESEJA CADASTRAR:\n");
        scanf("%d", &prod.qtdp);


        if (prod.qtdp < 10 ){ //Verifica se quantidade � menor que 10.
          puts("QUANTIDADE NAO PODE SER MENOR QUE 10:");
          printf("\n");
          y--;

         printf ("DESEJA CONTINUAR O CADASTRO");
            printf("\n");
           printf("1 - SIM       2 - NAO\n");
           scanf("%d",&op);

          if (op == 1){
             return (cad());
         }else
           main ();
        }
        printf("CODIGO DO PRODUTO: ");
        scanf("%d", &prod.codprod);


         for(i = 0; i <= y; i++){
        if(prod.codprod == produtos[i].codprod){ //Verificar se existe codigos iguais no vetor.
             printf("\n");
            puts("CODIGO JA EXISTE! FAVOR CADASTRAR NOVAMENTE.");
            system("pause");
            cad();
              }
    }

        printf("VALOR UNITARIO DO PRODUTO: ");
        scanf("%f", &prod.valorprod);


        printf("IDENTIFICACAO DO PRODUTO: ");
        fflush(stdin);
        gets(&prod.nomeprod);



        produtos[y] = prod;

        printf("\nPRODUTO CADASTRADO COM SUCESSO!\n\n");
        printf("CADASTRAR OUTRO PRODUTO?\n");
        printf("1 - SIM       2 - NAO\n");
        scanf("%d", &sair);

        if(sair == 2){
                for(i = 0 ; i <= y; i++){
        fwrite(&produtos[i], sizeof(cadastro), 1, arquivoP);
    }

                main();}
  }
        fclose(arquivoP);
}

void imprime(){
    int i = 0, j = 0;

    arquivoP = fopen("produtos.txt", "rb");
             fscanf(arquivoP, "%d", &y);
           while(!feof(arquivoP)){
        fread(&produtos[j],sizeof(cadastro),1,arquivoP);
        j++;
    }

    system("cls");
    printf("\n____________________M&R - RELATORIO ESTOQUE COMPLETO____________________\n\n");

for(i = 0; i <= y; i++){
 printf("COD.: %d      VALOR: %.2f    QTD.: %d\n", produtos[i].codprod, produtos[i].valorprod, produtos[i].qtdp);
 printf("___________________________________________________\n");
}

  if (y < 0 ){
       puts("NAO HA PRODUTOS CADASTRADOS");
    }
    system("pause");
    main();
   fclose(arquivoP);
}

void maiorpreco(cadastro produtos[y])
{
    int i = 0, j = 0, a = 0, auxcod, auxqtd = 0;
    float aux = 0;

   // char *auxN[15];

     system("cls");
        printf("\n____________________M&R - MAIORES PRECOS DO ESTOQUE____________________\n\n");

    for( i = 0; i <= y; i++ )
  {
    for( j = i + 1; j <= y; j++ ) // sempre 1 elemento � frente
    {
      if ( produtos[j].valorprod > produtos[i].valorprod )
      {
         aux = produtos[j].valorprod;
         produtos[j].valorprod = produtos[i].valorprod;
         produtos[i].valorprod = aux;

         auxcod = produtos[j].codprod;
         produtos[j].codprod = produtos[i].codprod;
         produtos[i].codprod = auxcod;

         auxqtd = produtos[j].qtdp;
         produtos[j].qtdp = produtos[i].qtdp;
         produtos[i].qtdp = auxqtd;

//         if (strcmp(produtos[j].nomeprod, produtos[i].nomeprod) >= 0) {
//				auxN = produtos[j].nomeprod;
//				produtos[j].nomeprod = produtos[i].nomeprod;
//				produtos[i].nomeprod = auxN;
//         }
      }
    }
  } // fim da ordena��o

  for( i = 0; i <= y; i++ )
  {
    printf("VALOR: %.2f          COD: %d\n", produtos[i].valorprod, produtos[i].codprod);
    printf("____________________________\n");
  }
  system("pause");
  main();

}

void precomedio()
{
    int i = 0;
    float media = 0, soma = 0;

system("cls");
    printf("\n____________________M&R - RELATORIO PRECO MEDIO DO ESTOQUE____________________\n\n");

    for(i = 0; i <= y; i++){

       soma = soma + produtos[i].valorprod;

    }
    media = soma / i;
    printf("O VALOR MEDIO DOS PRODUTOS EM ESTOQUE E: %.2f\n\n", media);

    system("pause");
    main();
}


int main()
{
        int opprincipal = 0, sair = 1, esc1 = 0;
        cadastro mPreco;
       // arquivoP = fopen("produtos.txt", "w+");
    // fprintf(arquivoP, "%d", y);
     //fclose(arquivoP);
    system("cls");
    system("color 47");
    while(capax == 0){
        capa();
    }


while(opprincipal == 0)
    {
        printf("\n_________________M&R - SISTEMA DE ESTOQUE, VENDAS E RELATORIOS_________________\n\n\n");
        printf("ESCOLHA UMA DAS OPCOES ABAIXO:\n\n");
        printf("[1] - GERENCIAR ESTOQUE   "
               "[2] - VENDAS   "
               "[3] - RELATORIOS   "
               "[4] - SAIR \n\n");
        printf("-> ");
        scanf("%d", &opprincipal);


        switch(opprincipal)
        {

        case 1:

            system("cls");
            printf("\n____________________M&R - GERENCIADOR DE ESTOQUE____________________\n\n\n");
            printf("[1] - CADASTRAR NOVO PRODUTO\n"
            "[2] - EXCLUIR PRODUTO\n"
            "[3] - ATUALIZAR PRODUTO\n"
            "[4] - SAIR \n\n");
            printf("-> ");
            scanf("%d", &esc1);

            switch(esc1)
            {

            case 1:

                cad();
                break;

            case 2:

                exclui();
                break;

            case 3:

                atualiza();
                break;

            case 4:
                main();
                break;

            default:
                printf("OPCAO INVALIDA!");
                getchar();
                main();
                break;
            }

            break;

        case 2:

            printf("EM BREVE FUNCAO DE CONTROLE DE VENDAS!!!\n");
            printf("pressione qualquer tecla para voltar\n");
            getch();
            main();

            break;

        case 3:
            system("cls");

            printf("\n____________________M&R - RELATORIOS____________________\n\n\n");
            printf("[1] - GERAR RELATORIO DE PRODUTO ESPECIFICO\n"
                   "[2] - GERAR RELATORIO COMPLETO\n"
                   "[3] - GERAR RELATORIO MAIOR PRECO\n"
                   "[4] - GERAR RELATORIO PRECO MEDIO DO ESTOQUE\n"
                   "[5] - SAIR\n");
            printf("-> ");
            scanf("%d", &esc1);

            switch(esc1){

        case 1:
            break;

        case 2:
                imprime();
                break;

        case 3:
            maiorpreco(produtos);
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        case 4:
            precomedio();
            break;

        case 5:
            main();
            }

        case 4:
            exit(1);


        case 10:
            capa();
            break;

        default:
            printf("OPCAO INVALIDA!");
            getch();
            main();

        }

    }

    return 0;
}
