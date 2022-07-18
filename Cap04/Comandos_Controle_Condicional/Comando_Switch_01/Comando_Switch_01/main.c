#include <stdio.h>
#include <stdlib.h>

/* Comando switch

    Sintaxe:

                switch(variavel) {
                    case valor1:
                        sequencia de comandos;
                        break;

                    case valor2:
                        sequencia de comandos;
                        break;

                    case valorN:
                        sequencia de comandos;
                        break;

                    default:
                        sequencia de comandos;
                }


        - Switch comando de sele��o m�ltipla, por� mais limitado que o os comandos if-else-if

        - Funcionalidade � testar express�es l�gicas ou relacionais verificando se uma vari�vel
            do tipo (int ou char) � ou n�o igual a certo valor de constante

        -Seu uso � indicado para testar uma vari�vel em rela��o a diversos valores preestabelecidos


        - Se um desses valores for igual ao valor da vari�vel, a sequ�ncia de comandos daquele comando
            case ser� executada

        - Comando default � opcional.

*/


int main()
{
    char ch;

    printf("Digite um simbolo de pomtuacao:  ");

    ch = getchar(); // ler caractere teclado, n�o recebe parametros, retorna tipo int processo convers�o autom�tica

    switch(ch){

        case '.':
            printf("Ponto . \n");
            break;

        case ',':
            printf("Virgula , \n");
            break;

        case ':':
            printf("Dois pontos :");
            break;

        case ';':
            printf("Ponto e virgula ;\n");
            break;

        default:
            printf("O valor digitado nao e pontuacao\n\n");

    } // termina o comando de selec�o switch

   system("pause");
    return 0;
}
