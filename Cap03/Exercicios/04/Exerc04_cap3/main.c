#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    float num1, num2, num3, num4, media;

    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4)/4;


    printf("A média dos 4 valores é: %.3f\n\n", media);

    system("pause");
    return 0;
}
