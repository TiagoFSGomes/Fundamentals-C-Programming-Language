#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    int num;

    scanf("%d", &num);
    printf("O n�mero sucessor �: %d e o anterior �: %d\n\n",  num + 1, num - 1);

    system("pause");
    return 0;
}
