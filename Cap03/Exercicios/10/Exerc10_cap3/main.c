#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa

#define premio 780000.00 // Constante tipo float premio valor R$780.000,00

int main()
{

    float win1, win2, win3;

    win1 = premio * (46.0/100.0); // valor a receber do primeiro ganhador (46% do total)
    win2 = premio * (32.0/100.0); // valor a receber do segundo ganhador (32% do total)
    win3 = premio - (win1 + win2); // valor a receber do terceiro ganhador (100% - 46% - 32% = 22% do total)

    setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    printf("O primeiro colocado receberá R$: %.2f\n", win1);
    printf("O segundo colocado receberá R$: %.2f\n", win2);
    printf("O terceiro colocado receberá R$: %.2f\n\n", win3);

    system("pause");
    return 0;
}
