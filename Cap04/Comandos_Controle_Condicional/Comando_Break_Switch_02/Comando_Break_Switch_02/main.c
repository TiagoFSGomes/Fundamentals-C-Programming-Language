#include <stdio.h>
#include <stdlib.h>


/*
    A não emprego do comando break pode ser útil
    quando se faz necessário que sejam executadas
    uma ou mais sequências de comandos a depender do
    valor da variável do switch.


*/
int main()
{
    int num;
    printf("Digite um numero de 0 a 9: ");

    scanf("%d", &num);

    switch(num){

        case 9:
            printf("Nove\n");

        case 8:
            printf("Oito\n");

        case 7:
            printf("Sete\n");

        case 6:
            printf("Seis\n");

        case 5:
            printf("Cinco\n");

        case 4:
            printf("Quatro\n");

        case 3:
            printf("Tres\n");

        case 2:
            printf("Dois\n");

        case 1:
            printf("Um\n");

        case 0:
            printf("Zero\n");
    }

    system("pause");
    return 0;
}
