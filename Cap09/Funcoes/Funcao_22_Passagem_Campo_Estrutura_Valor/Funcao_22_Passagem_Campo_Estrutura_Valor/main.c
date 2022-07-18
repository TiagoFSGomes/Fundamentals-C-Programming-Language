#include <stdio.h>
#include <stdlib.h>
/*

Exemplo: campo da estrutura passado por valor




*/

//Estrutura
struct ponto{
    int x, y;
};

//Função
void imprime_valor(int n)
{
    printf("Valor = %d\n",n);
}

int main()
{
    struct ponto p1 = {10,20};


    imprime_valor(p1.x); //p1.x = 10 passada por valor para a função imprime_valor
    imprime_valor(p1.y); //p1.y = 20

    system("pause");
    return 0;
}
