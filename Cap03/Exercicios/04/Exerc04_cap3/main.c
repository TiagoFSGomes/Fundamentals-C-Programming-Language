#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    float num1, num2, num3, num4, media;

    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4)/4;


    printf("A m�dia dos 4 valores �: %.3f\n\n", media);

    system("pause");
    return 0;
}
