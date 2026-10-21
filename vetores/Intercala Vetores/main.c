#include <stdio.h>
#include <stdlib.h>

void imprimeVetoresIntercalados (int vet1[], int vet2[]){
    int i,j=0;
    int vet3[20];
    for (i=0;i<10;i++){
        vet3[j] = vet1[i];
        j++;
        vet3[j] = vet2[i];
        j++;
    }
    for (i=0;i<20;i++){
        printf("%d ", vet3[i]);
    }
}

int main()
{
    int i;
    int vet1[10], vet2[10];
    printf("Digite os numeros inteiros do primeiro vetor:\n");
    for (i=0;i<10;i++){
        scanf("%d", &vet1[i]);
    }
    system("cls");
    printf("Digite os numeros inteiros do segundo vetor:\n");
    for (i=0;i<10;i++){
        scanf("%d", &vet2[i]);
    }
    imprimeVetoresIntercalados(vet1,vet2);
    return 0;
}
