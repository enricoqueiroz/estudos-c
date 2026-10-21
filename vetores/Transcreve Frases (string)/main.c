#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char vet1[100], vet2[100];
    printf("Digite uma frase:\n");
    fgets(vet1,sizeof(vet1),stdin);
    for (i = 0; vet1[i] != '\0'; i++) {
        if (vet1[i] == '\n') {
            vet1[i] = '\0';
            break;
        }
    }
    printf("Agora digite outra frase:\n");
    fgets(vet2,sizeof(vet2),stdin);
    for (i = 0; vet2[i] != '\0'; i++) {
        if (vet2[i] == '\n') {
            vet2[i] = '\0';
            break;
        }
    }
    int tam1 = strlen(vet1);
    int tam2 = strlen(vet2);
    if (tam1>tam2){
        for (i=0;i<tam1;i++){
            vet2[i] = vet1[i];
            printf("%c", vet1[i]);
        }
    }
    else for (i=0;i<tam2;i++){
            vet1[i] = vet2[i];
            printf("%c", vet2[i]);
        }
    return 0;
}
