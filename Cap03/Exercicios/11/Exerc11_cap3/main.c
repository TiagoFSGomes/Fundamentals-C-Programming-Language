#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    float raio, area, pi = 3.141592;

    printf("Digite o valor do raio do c�rculo: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A �rea do c�rculo �: %.3f\n\n", area);

    system("pause");
    return 0;
}
