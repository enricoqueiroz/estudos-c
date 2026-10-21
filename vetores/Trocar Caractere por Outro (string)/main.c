#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra1,letra2,frase[200];
    int i;
    /*
    printf("Escreva uma frase:\n");
    fgets(frase,sizeof(frase),stdin);
    printf("Escreva uma letra a ser analisada:\n");
    scanf(" %c", &letra1);
    printf("Escreva uma letra para a acima ser trocada:\n");
    scanf(" %c", &letra2);
    for(i=0;i<strlen(frase);i++){
            if(frase[i] != letra1) printf("%c", frase[i]);
            else if (frase[i] == letra1) printf("%c", letra2);
            else printf(" ");
    */
    printf("Digite uma coisa:\n");
    scanf(" %[^\n]", frase);
    printf("Escreva uma letra a ser analisada:\n");
    scanf(" %c", &letra1);
    printf("Escreva uma letra para trocar:\n");
    scanf(" %c", &letra2);
    for (i=0;i<sizeof(frase);i++){
        if (frase[i] == letra1) frase[i] = letra2;
    }
    printf("%s", frase);
    return 0;
}
