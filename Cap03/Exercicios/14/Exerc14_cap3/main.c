#include <stdio.h>
#include <stdlib.h>


// Programa que converte letra maiúscula em minúscula usando a tabela ASCII


int main(){

    char a;
    int conv;
    scanf("%c", &a);

    conv = a; // pega o numero ASCII da letra lida

    printf("%d\n",conv); //imprime o numero da letra de acordo com tabela ASCII

    conv = a + 32; // pega o seu correspondente minusculo



    printf("%c\n", conv);

    system("pause");
    return 0;
}
