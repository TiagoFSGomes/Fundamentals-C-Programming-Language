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
        Da mesma maneira como o operador de atribuição não funciona para strings, o
        mesmo ocorre com operadores relacionais usados para comparar duas strings. Desse
        modo, para saber se duas strings são iguais usa-se a função strcmp():


            int strcmp(char *str1, char *str2)

        A função strcmp() é case-sensitive. Isso significa que letras maiúsculas e minúsculas
        tornam as strings diferentes.

        */

        if(strcmp(str1,str2) == 0)
            printf("Strings iguais\n");
        else
            printf("Strings diferentes\n");

        system("pause");
        return 0;
    }
