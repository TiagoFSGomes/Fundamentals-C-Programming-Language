#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    int num1, num2, num3, soma;

    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;


    printf("O total da soma é: %d\n\n", soma);

    system("pause");
    return 0;
}
