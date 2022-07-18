#include <stdio.h>
#include <stdlib.h>


/* Comando DO-WHILE

    Executa a sequência de comandos e depois avalia a condição. Inverso do comando WHILE

    Sintaxe:

        do{
            sequência de comandos;

        }while(condição);


        Comando é utilizado sempre que se deseje que o comandos sejam executados uma vez ou mais
 */


int main()
{
    int i;

    do{
        printf("Escolha uma opcao:\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        printf("(3) Opcao 3\n");
        scanf("%d", &i);
    }while((i<1) || (i>3));)

    printf("Voce escolheu a opcao %d\n\n", i);

    system("pause");
    return 0;
}
