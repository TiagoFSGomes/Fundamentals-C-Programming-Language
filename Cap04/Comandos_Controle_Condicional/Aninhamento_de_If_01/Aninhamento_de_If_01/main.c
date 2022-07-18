#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aninhamento de If

    Sintaxe:
                if(condicao 1){

                     sequencia de comandos;

                    if(condicao 2){

                    sequencia de comandos;

                        if...
                     }
                    else{

                    sequencia de comandos;

                        if...
                    }
                }

                else{

                    sequencia de comandos;
                }

    - O aninhamento de ifs é muito útil quando se tem mais do que dois caminhos para executar.

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

        if(num > 10)

            printf("O número é maior que 10\n");

        else
            printf("O número é menor que 10\n\n");
    }


    system("pause");

    return 0;
}
