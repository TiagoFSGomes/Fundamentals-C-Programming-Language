#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentua��o da l�ngua portuguesa


int main()
{

    setlocale(LC_ALL, "Portuguese"); //Acentua��o da l�ngua portuguesa

    int num1, num2, num3;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num1);

    //Utilizando conceitos ensinados cap�tulo 3 de incremento e decremento

    num3 = --num1; //decrementa depois atribui
    num2 = ++num1 + 1; //incrementa depois atribui


    printf("O n�mero antecessor �: %d\n", num3);
    printf("O n�mero sucessor �: %d\n\n", num2);


    system("pause");
    return 0;
}
