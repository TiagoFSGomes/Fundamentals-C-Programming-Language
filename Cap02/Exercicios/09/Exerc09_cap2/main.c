#include <stdio.h>
#include <stdlib.h>

/* Programa que lê dois valores tipo float com um único comando
   Imprime na tela os valores lidos em ordem inversa

*/

int main()
{
    float var1, var2;

    printf("Digites dois numeros reais:  \n");
    scanf("%f%f",&var1,&var2);

    printf("Os numeros do tipo float digitados foram: %.3f e %.3f\n", var2, var1);

    system("pause");
    return 0;
}
