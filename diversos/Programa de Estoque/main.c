#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int telaPrincipal(char produto[][100], int quantidade[], float preco[], int numprod)
{
    int i;
    int escolha=0;
        printf("###### Programa de Estoque ######\n\n");
        printf("1 - Inserir Produtos\n2 - Listar Produtos\n3 - Encerrar\n\n");
        scanf(" %d", &escolha);
        system("cls");
        if (escolha == 1 || escolha == 2 || escolha == 3){
            if (escolha == 1){
                cadastrarProduto(produto,quantidade,preco,numprod,escolha);
            }
            else if (escolha == 2){
            listarProdutos(escolha,produto,quantidade,preco,numprod);
            }
            else if (escolha == 3) return 0;
        }
        else telaPrincipal(produto,quantidade,preco,numprod);
    return 0;
}

void cadastrarProduto(char produto[][100], int quantidade[], float preco[], int numprod)
{
    char simnao;
    if (numprod == 10){
        printf("Limite de produtos excedido.\nAperte qualquer tecla para voltar a tela principal.\n\n");
        getch();
        system("cls");
        telaPrincipal(produto,quantidade,preco,numprod);
    }
    printf("###### Adicionar produtos ######\n\n");
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", produto[numprod]);
    printf("\nDigite quantas unidades o estoque tem de %s: ", produto[numprod]);
    scanf("%d", &quantidade[numprod]);
    printf("\nDigite o preco da/o %s: ", produto[numprod]);
    scanf("%f", &preco[numprod]);
    numprod++;
    system("cls");
    if (numprod == 10){
        printf("Produto cadastrado!\n");
        getch();
        printf("Limite de produtos excedido.\nAperte qualquer tecla para voltar a tela primcipal.\n\n");
        getch();
        system("cls");
        telaPrincipal(produto,quantidade,preco,numprod);
    }
    printf("Produto cadastrado!\nCadastrar outro produto? (Digite 'S' para SIM e 'N' para NAO)\n");
    scanf(" %c", &simnao);
        if (simnao == 's' || simnao == 'S')
        {
            if (numprod == 10){
            printf("Limite de produtos excedido.\nAperte qualquer tecla para voltar a tela primcipal.\n\n");
            getch();
            system("cls");
            telaPrincipal(produto,quantidade,preco,numprod);
            }
            system("cls");
            cadastrarProduto(produto,quantidade,preco,numprod);
        }
        else if (simnao == 'n' || simnao == 'N'){
            system("cls");
            telaPrincipal(produto,quantidade,preco,numprod);
        }
    }

void listarProdutos(int escolha,char produto[][100], int quantidade[], float preco[], int numprod)
{
    int i;
     if (numprod == 0) {
        printf("Nenhum produto cadastrado ainda.\nPressione qualquer tecla para voltar ao menu.\n");
        getch();
        system("cls");
        telaPrincipal(produto,quantidade,preco,numprod);
    }
    printf("###### Listar Produtos ######\n\n");
    for (i=0;i<numprod;i++){
            printf("Produto %d - %s\n", i+1,produto[i]);
            printf("Quantidade no estoque: %d\n", quantidade[i]);
            printf("Preco: %.2f\n\n", preco[i]);
            printf("********************\n\n");
    }
    printf("Clique qualquer tecla para voltar a tela inicial.\n");
    getch();
    system("cls");
    telaPrincipal(produto,quantidade,preco,numprod);
}

int main()
{
    int escolha,numprod=0;
    char produto[100][100];
    int quantidade [100];
    float preco[100];
    telaPrincipal(produto,quantidade,preco,numprod);
    return 0;

}
