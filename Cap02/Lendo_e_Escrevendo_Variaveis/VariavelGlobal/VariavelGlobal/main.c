#include <stdio.h>
#include <stdlib.h>

int x = 5; //Variavel global. Pode ser acessada e alterada em qualquer parte do programa

void incr(){
    x++; //Acesso a variavel global
}
int main()
{
    printf("x = %d\n", x); //Acesso a variavel global
    incr();

    printf("x = %d\n", x); //Acesso a variavel global

    system("pause");
    return 0;
}
