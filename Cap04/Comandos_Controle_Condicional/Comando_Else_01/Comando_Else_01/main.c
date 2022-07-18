#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Comando else

    Sintaxe:
                if(condicao){

                     primeira sequencia de comandos;
                }
                else{

                    segunda sequencia de comandos;
                }

    - Se a condição do if for falsa o sequência de comandos do else é executada.
    - O comando else NÃO tem condição.
    - Em resumo, se a condição id diz o que fazer quando a condição for verdadeira,
        o comando else trata da condição quando ela for falsa.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");

    scanf("%d", &num);

    if(num == 10){

        printf("O número é igual que 10\n");

    }else{

        printf("O número é diferente de 10\n\n");
    }


    system("pause");

    return 0;
}
