#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca para manipula��o de strings
int main()
{
    //tamanho de uma string

    // int strlen(char *str)
    // Fun��o recebe um par�metro uma string e retorna o n�mero inteiro de caracteres


    char str[15] = "teste";

    printf("%d\n", strlen(str)); // retorna  o numero de caracteres da palavra teste e nao o tamanho do array 15


    system("pause");
    return 0;
}
