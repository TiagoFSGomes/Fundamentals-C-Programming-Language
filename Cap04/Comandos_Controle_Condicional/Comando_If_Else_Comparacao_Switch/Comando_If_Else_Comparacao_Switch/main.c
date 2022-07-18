#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Digite um simbolo de pontuacao: ");
    ch = getchar();

    //Utilizando comando if-else-if simulando o comando switch

    if(ch == '.')
        printf("Ponto .\n");
    else
        if(ch == ',')
            printf("Virgula , \n");
        else
            if(ch == ':')
                printf("Dois pontos : \n");
            else
                if(ch == ';')
                    printf("Ponto e Virgula ; \n");
                else
                    printf("Nao e pontuação o valor digitado\n\n");


    system("pause");
    return 0;
}
