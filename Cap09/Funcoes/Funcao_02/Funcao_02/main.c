#include <stdio.h>
#include <stdlib.h>


/* Fun��es:

    Sintaxe:

            tipo_retornado nome_fun��o (lista_de_par�metros) {
                    sequ�ncia de declara��es e comandos

            }
*/

/*Fun��o declarada depois da cl�usula main().
Nesse caso, � preciso declarar antes o PROT�TIPO DA FUN��O:

 Sintaxe:
        tipo_retornado nome_fun��o (lista_de_par�metros); */




//prot�tipo da fun��o apenas declara e omite o corpo da fun��o:

int Square (int a);
//int Square (int ); //N�o precisa incluir os nomes das vari�veis, apenas seus tipos




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

//Implementa��o da Fun��o
int Square (int a){
    return (a*a);

}
