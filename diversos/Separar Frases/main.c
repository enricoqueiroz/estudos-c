#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200];
    int i;
    printf("Escreva uma frase bacana:\n");
    gets(str);
    for (i=0;i<=strlen(str);i++){
        if (str[i] == ' ') printf("\n");
        else printf("%c", str[i]);
    }
    return 0;
}
