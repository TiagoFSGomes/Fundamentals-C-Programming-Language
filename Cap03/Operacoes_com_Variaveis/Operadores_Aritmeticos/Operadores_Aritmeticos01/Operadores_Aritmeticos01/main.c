#include <stdio.h>
#include <stdlib.h>


int main(){

    int x = 10, y = 20, z;

    //Multiplica��o, divis�o e resto s�o executadas antes das opera��es de adi��o e subtra��o

    z = x * y + 10;
    printf("z = %d\n", z);

    //Para mudar a ordem das opera��es, emprega-se uso dos par�nteses

    z = x * (y + 10); //Soma ser� executada primeiro
    printf("z = %d\n", z);

    system("pause");
    return 0;
}
