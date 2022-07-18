#include <stdio.h>
#include <stdlib.h>

/*Aninhamento de estruturas struct

Organização de dados.
Aproveitamento de código - evitar redeclarar campos

*/



// Estruturas aninhadas
struct endereco
{
    char rua[50];
    int numero;
};
struct cadastro
{
    char nome[50];
    int idade;
    struct endereco ender; //  variável ender do tipo struct endereco
};
int main()
{
    //fazendo atribuições:
   // struct cadastro c;

    // p.idade =31;
    // p.ender.numero =101;

    struct cadastro c;

//Lê do teclado uma string e armazena no campo nome
    gets(c.nome);

//Lê do teclado um valor inteiro e armazena no campo idade
    scanf("%d",&c.idade);

//Lê do teclado uma string
//e armazena no campo rua da variável ender
    gets(c.ender.rua);

//Lê do teclado um valor inteiro
//e armazena no campo numero da variável ender
    scanf("%d",&c.ender.numero);


    system("pause");
    return 0;
}
