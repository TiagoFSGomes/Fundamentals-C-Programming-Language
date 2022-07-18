#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa

const  float pi = 3.141592;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float altura, raio, volume;

    printf("Digite a altura do cilindro circular: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro circular: ");
    scanf("%f", &raio);

    volume = pi * (raio * raio) * altura;

    printf("O volume do cilindro é: %.3f\n\n", volume);

    system("pause");
    return 0;
}
