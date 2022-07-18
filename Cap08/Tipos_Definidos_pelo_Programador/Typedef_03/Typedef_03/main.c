#include <stdio.h>
#include <stdlib.h>

/*
 Comando typedef:

    Permite que o programador defina um
    "apelido" para um tipo existente.

    Sintaxe:

        typedef tipo_existente novo_nome;


        CUIDADOS AO USAR O TYPEDEF
*/


typedef unsigned int positivos[5];


int main()
{
    // Positivos é um sinônimo para "array" de inteiros positivos. Pode gerar
    // confusão em um programa longo. Necessidade de sempre verificar o tamanho do array e etc.

    positivos v = {10,20,30,40,50};

    int i;

    for(i=0; i<5; i++){
        printf("v[%d]: %d\n", i, v[i]);
    }

    system("pause");
    return 0;
}
