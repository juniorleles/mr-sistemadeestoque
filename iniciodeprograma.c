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
int y = -1;


void cad();
void imprime();
void maiorpreco();



void cad ()
{
    int sair = 1;
  while(sair == 1){
    if (y == x - 1){
        puts("NAO E POSSIVEL CADASTRAR!");
        return;
    }

    y++;
    cadastro prod;
        system("cls");
        printf("\n____________________M&R - CADASTRO DE PRODUTOS____________________\n\n");

        printf("CODIGO DO PRODUTO: ");
        scanf("%d", &prod.codprod);

        printf("VALOR UNITARIO DO PRODUTO: ");
        scanf("%f", &prod.valorprod);

        printf("IDENTIFICACAO DO PRODUTO: ");
        fflush(stdin);
        gets(&prod.nomeprod);

        printf("QUANTIDADE EM ESTOQUE: ");
        scanf("%d", &prod.qtdp);

        produtos[y] = prod;

        printf("\nPRODUTO CADASTRADO COM SUCESSO!\n\n");
        printf("CADASTRAR OUTRO PRODUTO?\n");
        printf("1 - SIM       2 - NAO\n");
        scanf("%d", &sair);

        if(sair == 2){main();}
  }

}

void imprime()
{
    int i;

    if (y == -1 ){
        puts("NAO HA PRODUTOS CADASTRADOS");}

    system("cls");
    printf("\n____________________M&R - RELATORIO COMPLETO____________________\n\n");

for(i = 0; i <= y; i++){
 printf("COD.: %d      VALOR: %.2f    IDENT.: %s    QTD.: %d\n", produtos[i].codprod, produtos[i].valorprod, produtos[i].nomeprod, produtos[i].qtdp);
 printf("___________________________________________________\n");
}
    system("pause");
    main();
}

void maiorpreco()
{
    int i = 0, j = 0;
    float aux = 0;

     system("cls");
        printf("\n____________________M&R - MAIORES PRECOS____________________\n\n");

    for( i = 0; i <= y; i++ )
  {
    for( j = i + 1; j <= y; j++ ) // sempre 1 elemento à frente
    {
      if ( produtos[j].valorprod > produtos[i].valorprod )
      {
         aux = produtos[j].valorprod;
         produtos[j].valorprod = produtos[i].valorprod;
         produtos[i].valorprod = aux;
      }
    }
  } // fim da ordenação

  for( i = 0; i <= y; i++ )
  {
    printf("COD: %d          VALOR: %.2f\n", produtos[i].codprod, produtos[i].valorprod);
    printf("____________________________\n");
  }
  system("pause");
  main();

}


int main()
{
        int opprincipal = 0, sair = 1, esc1 = 0;

    system("cls");
    system("color 47");


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
            "[3] - CONSULTAR / CONFERIR PRODUTO ESPECIFICO\n"
            "[4] - SAIR \n\n");
            printf("-> ");
            scanf("%d", &esc1);

            switch(esc1)
            {

            case 1:

                cad();
                break;

            case 4:
                main();
                break;

            default:
                printf("OPCAO INVALIDA!");

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
                   "[4] - SAIR\n");
            printf("-> ");
            scanf("%d", &esc1);

            switch(esc1){

        case 1:
            break;

        case 2:
                imprime();
                break;

        case 3:
            maiorpreco();
            break;
        default:
            printf("OPCAO INVALIDA!");
            break;
        case 4:
            main();
            }

        case 4:
            exit(1);

        default:
            printf("OPCAO INVALIDA!");
            getch();
            main();

        }

    }

    return 0;
}




