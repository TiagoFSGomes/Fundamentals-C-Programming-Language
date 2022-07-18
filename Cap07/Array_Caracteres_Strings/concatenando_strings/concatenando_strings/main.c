#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    char str1[15] = "bom ";
    char str2[15] = "dia!";

    //strcat(char *destino, char *origem)

    strcat(str1,str2); // concatenado ou seja colocando uma string no final da outra

    printf("%s\n\n",str1);

    system("pause");
    return 0;
}
