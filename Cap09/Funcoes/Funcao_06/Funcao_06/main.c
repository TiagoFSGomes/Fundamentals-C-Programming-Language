#include <stdio.h>
#include <stdlib.h>


/*Retorno da Função ; Funções SEM retorno


    void = conhecido como tipo VAZIO

    Uma função declarada com o tipo void vai apenas executar um conjunto
    de comandos e não devolverá nenhum valor para quem a chamar

*/

//Função que não retorna valor algum VOID
void imprime(int n){

    int i;

    for(i=i; i<=n; i++){
        printf("Linha %d\n",i);

    }
}

int main()
{
    imprime(5); // função apenas imprimirá uma mensagem na tela n vezes. Não devolver qualquer tipo para função main()
    system("pause");
    return 0;
}
