#include <stdio.h>
#include <stdlib.h>


/*Retorno da Fun��o ; Fun��es SEM retorno


    void = conhecido como tipo VAZIO

    Uma fun��o declarada com o tipo void vai apenas executar um conjunto
    de comandos e n�o devolver� nenhum valor para quem a chamar

*/

//Fun��o que n�o retorna valor algum VOID
void imprime(int n){

    int i;

    for(i=i; i<=n; i++){
        printf("Linha %d\n",i);

    }
}

int main()
{
    imprime(5); // fun��o apenas imprimir� uma mensagem na tela n vezes. N�o devolver qualquer tipo para fun��o main()
    system("pause");
    return 0;
}
