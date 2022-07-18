#include <stdio.h>
#include <stdlib.h>

/*
 Comando typedef:

    Permite que o programador defina um
    "apelido" para um tipo existente.

    Sintaxe:

        typedef tipo_existente novo_nome;


*/
// Definindo um sinônimo para int
typedef int inteiro;


int main()
{
    // Agora int e inteiro possuem o mesmo tipo

   int x =10;

   inteiro y = 20;

   y =  y + x;
   printf("Soma = %d\n", y);



    system("pause");
    return 0;
}
