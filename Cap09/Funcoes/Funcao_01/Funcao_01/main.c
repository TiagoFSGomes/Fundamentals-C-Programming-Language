#include <stdio.h>
#include <stdlib.h>


/* Fun��es:

    Sintaxe:

            tipo_retornado nome_fun��o (lista_de_par�metros) {
                    sequ�ncia de declara��es e comandos

            }
*/

/*Fun��o declarada antes de ser utilizada, ou seja,
antes da cl�usula main() */


int Square (int a){
    return (a*a);

}


int main()
{
    int n1, n2;
    printf("Entre com um numero: ");
    scanf("%d", &n1);

    n2 = Square(n1); //Par�metro passado para fun��o n1

    printf("Quadrado do numero digitado vale: %d\n\n", n2);

    system("pause");
    return 0;
}
