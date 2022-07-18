#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main()
{

    setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

    int num1, num2, num3;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    //Utilizando conceitos ensinados capítulo 3 de incremento e decremento

    num3 = --num1; //decrementa depois atribui
    num2 = ++num1 + 1; //incrementa depois atribui


    printf("O número antecessor é: %d\n", num3);
    printf("O número sucessor é: %d\n\n", num2);


    system("pause");
    return 0;
}
