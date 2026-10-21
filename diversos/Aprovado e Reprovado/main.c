#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Digite 2 notas:\n");
    scanf("%d %d", &n1,&n2);
    system("cls");
    if ((n1+n2)/2 >= 6) printf("Voce esta aprovado!\n");
    else if ((n1+n2)/2 <4) printf("Voce esta de recuperacao.\n");
    else printf("Voce esta reprovado.\n");
    return 0;
}
