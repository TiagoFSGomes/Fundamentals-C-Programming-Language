#include <stdio.h>
#include <stdlib.h>

/*Aninhamento de estruturas struct

Organiza��o de dados.
Aproveitamento de c�digo - evitar redeclarar campos

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
    struct endereco ender; //  vari�vel ender do tipo struct endereco
};
int main()
{
    //fazendo atribui��es:
   // struct cadastro c;

    // p.idade =31;
    // p.ender.numero =101;

    struct cadastro c;

//L� do teclado uma string e armazena no campo nome
    gets(c.nome);

//L� do teclado um valor inteiro e armazena no campo idade
    scanf("%d",&c.idade);

//L� do teclado uma string
//e armazena no campo rua da vari�vel ender
    gets(c.ender.rua);

//L� do teclado um valor inteiro
//e armazena no campo numero da vari�vel ender
    scanf("%d",&c.ender.numero);


    system("pause");
    return 0;
}
