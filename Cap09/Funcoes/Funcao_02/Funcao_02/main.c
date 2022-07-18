#include <stdio.h>
#include <stdlib.h>


/* Funções:

    Sintaxe:

            tipo_retornado nome_função (lista_de_parâmetros) {
                    sequência de declarações e comandos

            }
*/

/*Função declarada depois da cláusula main().
Nesse caso, é preciso declarar antes o PROTÓTIPO DA FUNÇÃO:

 Sintaxe:
        tipo_retornado nome_função (lista_de_parâmetros); */




//protótipo da função apenas declara e omite o corpo da função:

int Square (int a);
//int Square (int ); //Não precisa incluir os nomes das variáveis, apenas seus tipos




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

//Implementação da Função
int Square (int a){
    return (a*a);

}
