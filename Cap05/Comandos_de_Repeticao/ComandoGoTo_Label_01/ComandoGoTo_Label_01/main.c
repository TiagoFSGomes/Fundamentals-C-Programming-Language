#include <stdio.h>
#include <stdlib.h>

/* Comando Goto � um salto condicional
   para um local especificado por uma palavra-chave no c�digo

    Sintaxe:
                destino:
                goto destino;


*/
int main()
{
    int i = 0;

    inicio:

    if(i<5){
        printf("Numero %d\n",i);
        i++;
    goto inicio;
    }

    system("pause");
    return 0;
}
