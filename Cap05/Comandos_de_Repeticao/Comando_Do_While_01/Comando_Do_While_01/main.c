#include <stdio.h>
#include <stdlib.h>


/* Comando DO-WHILE

    Executa a sequ�ncia de comandos e depois avalia a condi��o. Inverso do comando WHILE

    Sintaxe:

        do{
            sequ�ncia de comandos;

        }while(condi��o);


        Comando � utilizado sempre que se deseje que o comandos sejam executados uma vez ou mais
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
