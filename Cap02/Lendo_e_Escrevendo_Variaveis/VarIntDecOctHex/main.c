#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variaveis
    int a = 125; //Valor em Decimal
    int b = 0435; //Valor em Octal (Inicia com 0), equivale a 285
    int c = 0x1FA; //Valor em Hexadeximal (Inicia com 0x ou 0X), equivale a 506

    printf("Valor de a: %d\n",a);
    printf("Valor de b: %d\n",b); //exibe na tela o valor em decimal
    printf("Valor de c: %d\n",c); //exibe na tela o valor em decimal

    system("pause");
    return 0;
}
