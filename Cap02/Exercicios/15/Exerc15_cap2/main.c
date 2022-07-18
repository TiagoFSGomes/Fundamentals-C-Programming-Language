#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa

/* Programa lê três variáveis chat int e float
   Imprima de três maneiras diferentes:
   1º - separadas por espaço
   2º - por tabulação horizontal
   3º - uma em cada linha

   obs.: Utilizar único comando printf() para cada operação de escrit das três variváveis
*/
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    int var1 = 10;
    char var2 = 'a';
    float var3= 51.1;

    //Imprimindo as variáveis separadas por espaço
    printf("Imprimindo as variáveis separadas por espaço: %d %c %.1f\n\n",var1,var2,var3);

    //Imprimindo as variáveis separadas por tabulação horizontal
    printf("Imprimindo as variáveis separadas por tabulação horizontal: %d\t%c\t%.1f\n\n",var1,var2,var3); // \t

    //Imprimindo as variáveis uma em cada linha
    printf("Imprimindo as variáveis uma em cada linha: \n%d\n%c\n%.1f\n\n",var1,var2,var3); // \n

    system("pause");
    return 0;
}
