#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa


int main(){



     float real, dolar;

    // setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    printf("Digite o valor em reais:    ");
    scanf("%f", &real);
    printf("Digite o valor da cotacao do dolar:    ");
    scanf("%f", &dolar);
    printf("O valor em dolar e: %.2f\n", real / dolar);

    system("pause");
    return 0;
}
