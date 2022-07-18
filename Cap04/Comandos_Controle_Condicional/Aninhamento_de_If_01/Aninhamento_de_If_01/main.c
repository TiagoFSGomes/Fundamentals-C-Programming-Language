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

    - O aninhamento de ifs � muito �til quando se tem mais do que dois caminhos para executar.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero: ");

    scanf("%d", &num);

    if(num == 10){

        printf("O n�mero � igual que 10\n");

    }else{

        if(num > 10)

            printf("O n�mero � maior que 10\n");

        else
            printf("O n�mero � menor que 10\n\n");
    }


    system("pause");

    return 0;
}
