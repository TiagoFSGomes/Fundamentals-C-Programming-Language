#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main()
    {

         //Comparando strings


        char str1[100], str2[100];

        printf("Entre com uma string: ");

        fgets(str1, 100, stdin);
        printf("Entre com outra string: ");

        fgets(str2, 100, stdin);


        /*
        Da mesma maneira como o operador de atribui��o n�o funciona para strings, o
        mesmo ocorre com operadores relacionais usados para comparar duas strings. Desse
        modo, para saber se duas strings s�o iguais usa-se a fun��o strcmp():


            int strcmp(char *str1, char *str2)

        A fun��o strcmp() � case-sensitive. Isso significa que letras mai�sculas e min�sculas
        tornam as strings diferentes.

        */

        if(strcmp(str1,str2) == 0)
            printf("Strings iguais\n");
        else
            printf("Strings diferentes\n");

        system("pause");
        return 0;
    }
