#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10, y = 20;

    /* Aten��o o operador simplificado atua sobre o resultado da
    express�o seguinte a ele.

    Podendo mudar as preced�ncias de multiplica��es e divis�es que s�o
    sempre realizadas antes de somas e subtra��es.

    */

    //x = x * y - 10; // Preced�ncia correta
    //printf("x = %d\n", x);

    x *= y - 10; // equivale a x = x * (y -10)
    printf("x = %d\n", x);

    //x = x - 5 + y; // Preced�ncia correta
    //printf("x = %d\n", x);

    x -= 5 + y; // equivale a x = x - (5 + y)
    printf("x = %d\n", x);


    system("pause");
    return 0;


}
