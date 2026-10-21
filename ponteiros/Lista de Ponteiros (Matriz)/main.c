#include <stdio.h>
#include <stdlib.h>

void exercicioUm()
{
    int *v,val;
    int *v2;
    int n = 5;
    static int i = 0, indicador = 1;
    v = (int *) malloc (n*sizeof(int));
    while (indicador == 1){
        for (i=i;i<n;i++){
            scanf("%d", &v[i]);
            if (v[i] < 0){
                indicador = 0;
                break;
            }
        }
        if (indicador != 0){
            n = n*2;
            v2 = (int *) malloc (n*sizeof(int));
            for (i=i;i<n/2;i++){
                v2[i] = v[i];
            }
        }
    }
    //Resolução sem FOR
    /*v = (int *) malloc (n*sizeof(int));
    scanf("%d", &valor);
    while (valor >=0){
        if (i>=n){
            v2 = (int *) malloc (n*2*sizeof(int));
            for (i=i;i<n/2;i++){
                v2[i] = v[i];
            }
            free(v);
            v = v2;
        }
        v[i2] = val;
        i2++;
        scanf("%d", &val);
    }
    */

    for (i=0;i<n;i++){
    printf("%d ", v2[i]);
    }
}

void imprimeMatriz(int linhas, int colunas,int *v)
{
    int i,j;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", v[i * colunas + j]);
        }
        printf("\n");
    }
}

void exercicioDois()
{
    int *v;
    int linhas=5,colunas=5;
    int i=0,j=0;
    v = (int *) malloc(linhas * colunas *(sizeof(int)));
    for (i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            if (i==j) v[i * colunas + j] = 1;
            else v[i * colunas + j] = 0;
        }
    }
    imprimeMatriz(linhas, colunas,v);
    free(v);
}

void imprimeMatrizFloat(int linhas, int colunas,float *v)
{
    int i,j;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", v[i * colunas + j]);
        }
        printf("\n");
    }
}

int criaMatriz(int altura, int largura)
{
    int tamanho;
    tamanho = altura * largura *(sizeof(float));
    return tamanho;
}

void liberaMatriz(float *v)
{
    free(v);
    return;
}

void matrizFloat()
{
    float *v;
    int linhas = 5, colunas = 5;
    int i,j;
    v = (float *) malloc (criaMatriz(linhas,colunas));
    for (i=0;i<linhas;i++){
        for (j=0;j<colunas;j++){
            scanf("%f", &v[i * colunas + j]);
        }
    }
    imprimeMatrizFloat(5,5,v);
    liberaMatriz(v);

}
int main()
{
    exercicioDois();
    return 0;
}
