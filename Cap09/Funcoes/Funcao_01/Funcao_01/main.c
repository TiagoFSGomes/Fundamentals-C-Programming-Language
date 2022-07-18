#include <stdio.h>
#include <stdlib.h>


/* Funções:

    Sintaxe:

            tipo_retornado nome_função (lista_de_parâmetros) {
                    sequência de declarações e comandos

            }
*/

/*Função declarada antes de ser utilizada, ou seja,
antes da cláusula main() */


int Square (int a){
    return (a*a);

}


int main()
{
    int n1, n2;
    printf("Entre com um numero: ");
    scanf("%d", &n1);

    n2 = Square(n1); //Parâmetro passado para função n1

    printf("Quadrado do numero digitado vale: %d\n\n", n2);

    system("pause");
    return 0;
}
