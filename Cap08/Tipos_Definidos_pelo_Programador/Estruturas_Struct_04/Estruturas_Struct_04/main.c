#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Inicializa��o de struturas
   Atribui��o entre estruturas
*/

struct pessoa
{

    char nome[50], rua[50];
    int idade, numero;

};


int main()
{
    //Inicializa��o de struturas na mesma ordem em que foram declaradas
    struct pessoa p = {"Tiago", "Rua Oleg�rio", 33,1711};

    struct pessoa p2; // declarando uma segunda estrura p/ reber a c�pia de pessoa p


    //Atribui��o entre estruturas por vari�vel
    //strcpy(p2.nome,p.nome);
    //strcpy(p2.rua,p.rua);

    //p2.idade=p.idade;
    //p2.numero=p.numero;


     //Atribui��o entre estruturas do mesmo tipo

     p2 =p; // m�todo mais eficaz

    //imprimindop estrutura pessoa p2
    printf("%s, %d anos,  %s, numero %d\n\n", p2.nome,p2.idade,p2.rua,p2.numero);

    system("pause");
    return 0;
}
