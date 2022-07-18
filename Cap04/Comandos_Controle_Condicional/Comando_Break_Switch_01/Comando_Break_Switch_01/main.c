#include <stdio.h>
#include <stdlib.h>

/* Comando break (Opicional)

    Break faz com que os comando switch seja interrompido quando
    uma das sequências de comandos é executada.

*/

int main()
{
    char ch;

    printf("Digite um simbolo de pomtuacao:  ");

    ch = getchar(); // ler caractere teclado, não recebe parametros, retorna tipo int processo conversão automática

    switch(ch){

        case '.':
            printf("Ponto . \n");
            // break; //Sem não exista o break, os comandos da case seguintes serão executadas.

        case ',':
            printf("Virgula , \n");
            // break;

        case ':':
            printf("Dois pontos :");
            //break;

        case ';':
            printf("Ponto e virgula ;\n");
            //break;

        default:
            printf("O valor digitado nao e pontuacao\n\n");

    } // termina o comando de selecão switch

   system("pause");
    return 0;
}
