#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cont, soma=0;

    for(i=2, cont=0; cont<50; i+=2, cont++)
    {
        soma = soma + i;
        printf("%d\n\n", soma);
    }
    //printf("%d", soma); //Mostra apenas resultado final da soma



    system("pause");
    return 0;
}
