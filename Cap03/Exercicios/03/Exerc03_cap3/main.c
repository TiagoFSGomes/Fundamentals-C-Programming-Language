#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    int num1, num2, num3, soma;

    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;


    printf("O total da soma �: %d\n\n", soma);

    system("pause");
    return 0;
}
