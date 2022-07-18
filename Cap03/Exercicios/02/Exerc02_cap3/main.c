#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    float num1;

    scanf("%f", &num1);
    printf("A quinta parte do número digitado é: %.3f\n\n", num1/5);

    system("pause");
    return 0;
}
