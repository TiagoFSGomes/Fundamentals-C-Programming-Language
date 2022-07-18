#include <stdio.h>
#include <stdlib.h>

/* Em linguagem C, a declara��o dos par�metros de uma fun��o segue esta forma
geral:
        tipo_retornado nome_fun��o (tipo nome1, tipo nome2, ... , tipo nomeN){

         sequ�ncia de declara��es e comandos
}


Obs.:  na declara��o de par�metros de uma fun��o � necess�rio especificar o tipo de cada vari�vel.
*/

/* Fun��es sem lista de par�metros - Aten��o

 01 - Deixar a lista de par�metros vazia: void imprime()

  Explica��o: fun��o pode ser chamada passando-se valores para ela.
  O compilador n�o vai verificar se a fun��o � realmente chamada sem argumentos,
  e a fun��o N�O conseguir� ter acesso a esses par�metros.


02 - Colocar void entre par�nteses: void imprime(void)

    Explica��o: programa acusar� um erro se o programador
    tentar passar um valor para essa fun��o.


RESUMO:Colocar void na lista de par�metros � diferente de n�o
        colocar nenhum par�metro


*/

//Fun��o sem void
void imprime(){
    printf("Teste de funcao\n");
}

//Fun��o com void
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
