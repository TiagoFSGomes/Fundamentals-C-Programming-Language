#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

     float kmh, vel_ms;

     printf("Digite a velocidade em Km/h: ");
     scanf("%f", &kmh);

     vel_ms = kmh / 3.6; //velocidade em m/s

     printf("A velocidade em metros por segundo é: %.3f\n\n", vel_ms);

     system("pause");
     return 0;
}
