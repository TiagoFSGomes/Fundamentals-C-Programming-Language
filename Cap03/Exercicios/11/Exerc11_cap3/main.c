#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    float raio, area, pi = 3.141592;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A área do círculo é: %.3f\n\n", area);

    system("pause");
    return 0;
}
