#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    float num1;

    scanf("%f", &num1);
    printf("A quinta parte do n�mero digitado �: %.3f\n\n", num1/5);

    system("pause");
    return 0;
}
