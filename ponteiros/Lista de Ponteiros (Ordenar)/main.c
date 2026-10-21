#include <stdio.h>
#include <stdlib.h>

void trocar(int *um, int *dois)
{
    int varia = *um;
    *um = *dois;
    *dois = varia;
}

void ordenaValor(int *a, int *b, int *c)
{
    if (*a > *b) {
        trocar(a, b);
    }
    if (*b > *c) {
        trocar(b, c);
    }
    if (*a > *b) {
        trocar(a, b);
    }
}

int main()
{
    int a = 7,b = 3,c = 5;
    ordenaValor(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
