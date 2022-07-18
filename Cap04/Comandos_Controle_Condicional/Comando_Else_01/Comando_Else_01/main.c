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

    - Se a condi��o do if for falsa o sequ�ncia de comandos do else � executada.
    - O comando else N�O tem condi��o.
    - Em resumo, se a condi��o id diz o que fazer quando a condi��o for verdadeira,
        o comando else trata da condi��o quando ela for falsa.

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

        printf("O n�mero � diferente de 10\n\n");
    }


    system("pause");

    return 0;
}
