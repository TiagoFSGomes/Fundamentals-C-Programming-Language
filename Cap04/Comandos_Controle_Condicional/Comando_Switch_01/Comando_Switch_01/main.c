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


        - Switch comando de seleção múltipla, poré mais limitado que o os comandos if-else-if

        - Funcionalidade é testar expressões lógicas ou relacionais verificando se uma variável
            do tipo (int ou char) é ou não igual a certo valor de constante

        -Seu uso é indicado para testar uma variável em relação a diversos valores preestabelecidos


        - Se um desses valores for igual ao valor da variável, a sequência de comandos daquele comando
            case será executada

        - Comando default é opcional.

*/


int main()
{
    char ch;

    printf("Digite um simbolo de pomtuacao:  ");

    ch = getchar(); // ler caractere teclado, não recebe parametros, retorna tipo int processo conversão automática

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

    } // termina o comando de selecão switch

   system("pause");
    return 0;
}
