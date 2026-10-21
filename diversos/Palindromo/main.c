#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200];
    int i,j,tamanho,palindroma = 1;
    printf("Escreva uma palavra bacana:\n");
    gets(str);
    /*"fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';*/
    tamanho = strlen(str);
    for (i=0,j=tamanho-1;i<j;i++,j--){
        if(str[i]!=str[j]) palindroma=0;
        }
    if (palindroma) printf("A palavra eh palindroma");
    else printf("A palavra nao eh palindroma");

    return 0;
}
