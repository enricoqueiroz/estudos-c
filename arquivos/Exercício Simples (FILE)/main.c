#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    int num;
    //arq = fopen("dados.txt","w"); para só escrever
    arq = fopen("dados.txt","w");
    if (arq == NULL){
        printf("Nao foi possivel criar!");
        exit(1);
    }
    fprintf(arq, "1234");
    fclose(arq);
    return 0;
}
