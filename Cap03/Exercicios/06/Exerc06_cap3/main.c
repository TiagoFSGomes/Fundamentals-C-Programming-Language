#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

     float kmh, vel_ms;

     printf("Digite a velocidade em Km/h: ");
     scanf("%f", &kmh);

     vel_ms = kmh / 3.6; //velocidade em m/s

     printf("A velocidade em metros por segundo �: %.3f\n\n", vel_ms);

     system("pause");
     return 0;
}
