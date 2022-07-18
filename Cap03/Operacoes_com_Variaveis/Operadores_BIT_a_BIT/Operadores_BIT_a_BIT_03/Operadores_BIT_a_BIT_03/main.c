#include <stdio.h>
#include <stdlib.h>

    /*
        <<	Deslocamento de bits à esquerda
        >>	Deslocamento de bits à direita

    Movimentam todos os bits de um valor para esquerda ou direita
    nos lugares vagos


    Desta forma, deslocar um bit para a direita equivale a dividir seu valor por 2
    a cada casa binária deslocada, enquanto o deslocamento de um bit à esquerda significa
    que seu valor será multiplicado por dois, a cada casa deslocada.

    Desta forma, para um dado bit x:

                x << 1 = x * 2
                x << 2 = x * 4
                x << 3 = x * 8
                x >> 1 = x / 2
                x >> 2 = x / 4
                x >> 3 = x / 8

                00101100 = x (valor igual a 44 em decimal)
                10110000 = x << 2 (176 em decimal)
                00001011 = x >> 2 (11 em decimal)

    */
int main()
{
    unsigned char x, y;
    x = 44;
    printf("x = %d\n", x); // 44

    y = x << 2;
    printf("x = %d\n", y); //176

    y = x >> 2;
    printf("x = %d\n", y); //11

    system("pause");
    return 0;
}
