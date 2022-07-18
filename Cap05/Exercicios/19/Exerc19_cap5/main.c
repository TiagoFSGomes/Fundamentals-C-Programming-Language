#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que calcule e escreva o valor de S

    S = 1/1 + 3/2 + 5/3 + 7/4 + ...+ 99/55
*/
int main()
{
    float s = 0, numerador, denominador;

    for(numerador = 1, denominador = 1; numerador <= 99; numerador += 2, denominador++)
    {
        s += numerador / denominador;
        //printf("S e igua a: %.3f\n", s);
    }
    printf("S e igua a: %.3f\n", s);
    system("pause");
    return 0;
}
