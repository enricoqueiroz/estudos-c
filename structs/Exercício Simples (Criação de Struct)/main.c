#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct aluno
{
    char nome[51];
    float nota;
};

void exibeAluno(struct aluno a)
{
    printf("%s\n",a.nome);
    printf("Nota: %.2f\n\n",a.nota);
}

struct aluno criaAluno(char *nome, int nota)
{
    struct aluno a;
    strcpy(a.nome, nome);
    a.nota = nota;
    return a;
}

int main()
{
    int i;
    struct aluno alunos[10];
    alunos[0] = criaAluno("Chaves",4);
    alunos[1] = criaAluno("Chiquinha",4.2);
    alunos[2] = criaAluno("Quico",1.2);
    alunos[3] = criaAluno("Nhonho",5.5);
    exibeAluno(alunos[0]);
    return 0;
}
