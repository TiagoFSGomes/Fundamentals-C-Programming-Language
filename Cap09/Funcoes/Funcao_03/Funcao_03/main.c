#include <stdio.h>
#include <stdlib.h>

/* Em linguagem C, a declaração dos parâmetros de uma função segue esta forma
geral:
        tipo_retornado nome_função (tipo nome1, tipo nome2, ... , tipo nomeN){

         sequência de declarações e comandos
}


Obs.:  na declaração de parâmetros de uma função é necessário especificar o tipo de cada variável.
*/

/* Funções sem lista de parâmetros - Atenção

 01 - Deixar a lista de parâmetros vazia: void imprime()

  Explicação: função pode ser chamada passando-se valores para ela.
  O compilador não vai verificar se a função é realmente chamada sem argumentos,
  e a função NÃO conseguirá ter acesso a esses parâmetros.


02 - Colocar void entre parênteses: void imprime(void)

    Explicação: programa acusará um erro se o programador
    tentar passar um valor para essa função.


RESUMO:Colocar void na lista de parâmetros é diferente de não
        colocar nenhum parâmetro


*/

//Função sem void
void imprime(){
    printf("Teste de funcao\n");
}

//Função com void
/*void imprime(void){
    printf("Teste de funcao\n");
}*/

int main()
{
    imprime();
    imprime(5);
    imprime(5,'a');

    system("pause");
    return 0;
}
