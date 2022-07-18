#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main(){



     float real, dolar;

    // setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    printf("Digite o valor em reais:    ");
    scanf("%f", &real);
    printf("Digite o valor da cotacao do dolar:    ");
    scanf("%f", &dolar);
    printf("O valor em dolar e: %.2f\n", real / dolar);

    system("pause");
    return 0;
}
