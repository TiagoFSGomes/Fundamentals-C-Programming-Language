#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10, y = 20;

    // Operador empregado quando a vari�vel que receber� o resultado
    // tamb�m e um dos operandos da express�o

    x += y -10; // x = x + y -10
    printf("x = %d\n",x);

    x -= 5; //x = x - 5
    printf("x = %d\n",x);

    x *= 10; // x = x * 10;
    printf("x = %d\n",x);

    x /= 15; // x = x / 15
    printf("x = %d\n",x);


    system("pause");
    return 0;
}
