#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Comando if

    Sintaxe:
                if(condicao){

                    sequencia de comando;

                }

    - Se a condi��o for verdadeira - sequ�ncia de comandos ser�o executadas
    - Se a condi��es for falsa - sequ�ncia de comandos n�o ser�o executadas
*/



int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(num > 10)
        printf("O n�mero � maior que 10\n");

    system("pause");
    return 0;
}
