#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float cateto_a, cateto_b, hipotenusa;

    printf("Digite o valor do cateto a: ");
    scanf("%f", &cateto_a);
    printf("Digite o valor do cateto b: ");
    scanf("%f", &cateto_b);

   // hipotenusa = sqrt((cateto_a*cateto_a + cateto_b * cateto_b));

    hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2)); // pow(base, expoente);

    printf("A hipotenusa do triângulo é: %.3f\n\n", hipotenusa);

    system("pause");
    return 0;
}
