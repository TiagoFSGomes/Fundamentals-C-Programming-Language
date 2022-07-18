#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa

/* Programa l� tr�s vari�veis chat int e float
   Imprima de tr�s maneiras diferentes:
   1� - separadas por espa�o
   2� - por tabula��o horizontal
   3� - uma em cada linha

   obs.: Utilizar �nico comando printf() para cada opera��o de escrit das tr�s variv�veis
*/
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    int var1 = 10;
    char var2 = 'a';
    float var3= 51.1;

    //Imprimindo as vari�veis separadas por espa�o
    printf("Imprimindo as vari�veis separadas por espa�o: %d %c %.1f\n\n",var1,var2,var3);

    //Imprimindo as vari�veis separadas por tabula��o horizontal
    printf("Imprimindo as vari�veis separadas por tabula��o horizontal: %d\t%c\t%.1f\n\n",var1,var2,var3); // \t

    //Imprimindo as vari�veis uma em cada linha
    printf("Imprimindo as vari�veis uma em cada linha: \n%d\n%c\n%.1f\n\n",var1,var2,var3); // \n

    system("pause");
    return 0;
}
