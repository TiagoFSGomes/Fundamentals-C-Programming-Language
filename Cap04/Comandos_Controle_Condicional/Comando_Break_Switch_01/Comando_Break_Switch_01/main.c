#include <stdio.h>
#include <stdlib.h>

/* Comando break (Opicional)

    Break faz com que os comando switch seja interrompido quando
    uma das sequ�ncias de comandos � executada.

*/

int main()
{
    char ch;

    printf("Digite um simbolo de pomtuacao:  ");

    ch = getchar(); // ler caractere teclado, n�o recebe parametros, retorna tipo int processo convers�o autom�tica

    switch(ch){

        case '.':
            printf("Ponto . \n");
            // break; //Sem n�o exista o break, os comandos da case seguintes ser�o executadas.

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

    } // termina o comando de selec�o switch

   system("pause");
    return 0;
}
