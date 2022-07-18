#include <stdio.h>
#include <stdlib.h>

int main(){

    float real, dolar;

    printf("Digite o valor em reais:    ");
    scanf("%f", &real);
    printf("Digite o valor do dolar:    ");
    scanf("%f", &dolar);
    printf("%.2f\n", real / dolar);

    system("pause");
    return 0;
}
