#include <stdio.h>
#include <stdlib.h>

void desenhaTriangulo (int n)
{
    int i;
    for (i=0;i<n;i++){
        printf("*");
    }
    if (n == 0) return;
    printf("\n");
    desenhaTriangulo(n-1);
}

void desenhaTrianguloInv (int n)
{
    int i;
    /*static int j=1;
    for (i=n-j;i<n;i++){
        printf("*");
    }
    j++;
    printf("\n");
    if (n == 0) return;
    desenhaTrianguloInv(n-1);*/
    //Forma alternativa
    if (n == 0) return;
    desenhaTrianguloInv(n-1);
    for (i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
}

int encontraValor(int vet[], int n)
{
    static int i;
    static int j = 0;
    if (vet[i] == n) return i+1;
    else j++;
    i++;
    if (j == i) return -1;
    encontraValor(vet,n);
}

int main()
{
    //Exercício 1
    //desenhaTriangulo(5);

    //Exercício 2
    desenhaTrianguloInv(5);

    //Exercício 3
    //int vet[5] = {1,3,5,2,7};
    //printf("%d", encontraValor(vet,3));
    //int vet[5];
    return 0;
}
