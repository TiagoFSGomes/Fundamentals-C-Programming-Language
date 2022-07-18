#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca para manipulação de strings
int main()
{
    //tamanho de uma string

    // int strlen(char *str)
    // Função recebe um parâmetro uma string e retorna o número inteiro de caracteres


    char str[15] = "teste";

    printf("%d\n", strlen(str)); // retorna  o numero de caracteres da palavra teste e nao o tamanho do array 15


    system("pause");
    return 0;
}
