#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Comando if

    Sintaxe:
                if(condicao){

                    sequencia de comando;

                }

    - Se a condição for verdadeira - sequência de comandos serão executadas
    - Se a condições for falsa - sequência de comandos não serão executadas
*/



int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 10)
        printf("O número é maior que 10\n");

    system("pause");
    return 0;
}
