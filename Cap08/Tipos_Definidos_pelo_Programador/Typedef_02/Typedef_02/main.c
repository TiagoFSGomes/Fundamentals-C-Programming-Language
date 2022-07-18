#include <stdio.h>
#include <stdlib.h>

/*
 Comando typedef:

    Permite que o programador defina um
    "apelido" para um tipo existente.

    Sintaxe:

        typedef tipo_existente novo_nome;


        Facilita a declaração de variáveis.
*/
// Definindo uma estrututa

struct cadastro{

    char nome[50], rua[50];
    int idade, numero;
};


typedef struct cadastro cad; // struct cadastro agora e cad possuem o mesmo tipo


int main()
{
    // Agora "struct cadastro" e "cad" possuem o mesmo tipo

 struct cadastro c1; //declarando variavel c1
 cad c2;


    system("pause");
    return 0;
}
