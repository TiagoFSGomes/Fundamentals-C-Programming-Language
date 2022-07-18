#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // char* strcpy(char *destino, char *origem)
    char str1[100], str2[100];
    printf("entre com uma string: ");
    fgets(str1, 100, stdin);


    strcpy(str2, str1); //função cópia de strings

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    system("pause");

    return 0;
}
