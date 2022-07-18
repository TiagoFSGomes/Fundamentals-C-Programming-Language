#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10, y = 20;

    // Operador empregado quando a variável que receberá o resultado
    // também e um dos operandos da expressão

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
