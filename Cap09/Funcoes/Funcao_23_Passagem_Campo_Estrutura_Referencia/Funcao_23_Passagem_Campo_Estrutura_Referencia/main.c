#include <stdio.h>
#include <stdlib.h>

/*

De fato, como se pode ver, para a passagem de um campo da
estrutura por referência valem todas as regras vistas para
a passagem de parâmetros por referência.


*/

struct ponto
{
    int x, y;
};
void  soma_imprime_valor(int *n)
{
    *n = *n + 1;
    printf("Valor = %d\n",*n);
}
int main()
{
    struct ponto p1 = {10,20};

    soma_imprime_valor(&p1.x); // 11
    soma_imprime_valor(&p1.y); //21

    system("pause");
    return 0;
}
