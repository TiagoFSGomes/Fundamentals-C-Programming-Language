#include <stdio.h>
#include <stdlib.h>

/* ---------------RECURSÃO---------------------

 - CÓDIGO ABAIXO SEM RECURSÃO

int fatorial (int n){

    int i, f=1;

    for(i=1; i<=n; i++){
        f = f*i;
    }

    return f;

}
 - Em geral, as formas recursivas dos algoritmos são consideradas “mais enxutas” e
“mais elegantes” do que suas formas iterativas. Isso facilita a interpretação do código.
Porém, esses algoritmos apresentam maior dificuldade na detecção de erros e podem
ser ineficientes.

Durante a implementação de uma função recursiva temos de ter em mente duas
coisas: o CRITÉRIO DE PARADA e o PARÂMETRO DA CHAMADA RECURSIVA:

- CRITÉRIO DE PARADA: determina quando a função deve parar de chamar a si mesma.
Se ele não existir, a função continuará executando até esgotar a memória do
computador. No cálculo de fatorial, o critério de parada ocorre quando tentamos
calcular o fatorial de zero: 0! = 1.

- PARÂMETRO DA CHAMADA RECURSIVA: quando chamamos a função dentro dela mesma,
devemos sempre mudar o valor do parâmetro passado, de forma que a recursão chegue
a um término. Se o valor do parâmetro for sempre o mesmo, a função
continuará executando até esgotar a memória do computador.

No cálculo de fatorial, a mudança no parâmetro da chamada recursiva ocorre quando definimos o
fatorial de N em termos no fatorial de (N − 1): N! = N * (N − 1)!.




*/


int fatorial (int n)
{
    if(n == 0)
        return 1;
    else
        return n*fatorial(n-1);
}

int main()
{
    int x;

    x = fatorial(4);
    printf("4! = %d\n",x);


    system("pause");
    return 0;
}
