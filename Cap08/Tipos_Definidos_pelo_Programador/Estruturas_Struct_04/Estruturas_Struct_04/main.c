#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Inicialização de struturas
   Atribuição entre estruturas
*/

struct pessoa
{

    char nome[50], rua[50];
    int idade, numero;

};


int main()
{
    //Inicialização de struturas na mesma ordem em que foram declaradas
    struct pessoa p = {"Tiago", "Rua Olegário", 33,1711};

    struct pessoa p2; // declarando uma segunda estrura p/ reber a cópia de pessoa p


    //Atribuição entre estruturas por variável
    //strcpy(p2.nome,p.nome);
    //strcpy(p2.rua,p.rua);

    //p2.idade=p.idade;
    //p2.numero=p.numero;


     //Atribuição entre estruturas do mesmo tipo

     p2 =p; // método mais eficaz

    //imprimindop estrutura pessoa p2
    printf("%s, %d anos,  %s, numero %d\n\n", p2.nome,p2.idade,p2.rua,p2.numero);

    system("pause");
    return 0;
}
