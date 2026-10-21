#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100], letra[1];
    int i,cont;
    printf("Escreva algo:\n");
    gets(str);
    printf("Escreva uma letra:\n");
    scanf("%s", &letra);
    for (i=0;i<=100;i++){
        if (str[i] == letra[0]) cont++;
    }
    printf("A letra '%s' aparece %d vezes", letra,cont);
    return 0;
}
