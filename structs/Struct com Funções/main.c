#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[51];
    char ra[11];
    float n1,n2,media;
};

struct aluno criaAluno(float n1, float n2, int j)
{
    int i;
    char nome[51];
    char ra[11];
    struct aluno a;
    for (i=0;i<1;i++){
    printf("Digite o nome do aluno %d: ", j);
    scanf("%s", nome);
    strcpy(a.nome,nome);
    printf("Digite o R.A do aluno %d: ", j);
    scanf("%s", ra);
    strcpy (a.ra,ra);
    a.n1 = n1;
    a.n2 = n2;
    a.media = (n1+n2)/2.0;
    }
    system("cls");
    return a;
}

void imprimeAluno(struct aluno a,int i)
{
    printf("Nome aluno %d: %s\n", i,a.nome);
    printf("R.A aluno %d: %s\n", i,a.ra);
    printf("Nota aluno %d: %.2f\n", i,a.n1);
    printf("Nota aluno %d: %.2f\n", i,a.n2);
    printf("Media aluno %d: %.2f\n\n", i,a.media);
}

int main()
{
    int i,j=1;
    struct aluno alunos[3];
    alunos[0] = criaAluno(3.0,4.0,j);
    alunos[1] = criaAluno(7.0,4.0,j+1);
    alunos[2] = criaAluno(1.0,1.0,j+2);
    for(i=0;i<3;i++){
        imprimeAluno(alunos[i],i+1);
    }
    return 0;
}
