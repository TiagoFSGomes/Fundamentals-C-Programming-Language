#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int z = 9;


int main(){

    float x; // Declara a variavel x como float

    //Declara  y e atribui um valor
    float y = 3;

    //Atribui um valor a x
    x = 5;
    printf("x = %.2f\n",x);


    //Atribui uma constante a x
    x = z;
    printf("x = %.2f\n",x);


    //Atribui o resultado de uma expressão matemática a x
    x = y + 5;
    printf("x = %.2f\n", x);

    //Atribui o resultado de uma função a x
    x = sqrt(9);
    printf("x = %.2f\n",x);

    system("pause");
    return 0;


}
