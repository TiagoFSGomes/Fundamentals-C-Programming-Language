#include <stdio.h>
#include <stdlib.h>


int main(){

    int x = 10, y = 20, z;

    //Multiplicação, divisão e resto são executadas antes das operações de adição e subtração

    z = x * y + 10;
    printf("z = %d\n", z);

    //Para mudar a ordem das operações, emprega-se uso dos parênteses

    z = x * (y + 10); //Soma será executada primeiro
    printf("z = %d\n", z);

    system("pause");
    return 0;
}
