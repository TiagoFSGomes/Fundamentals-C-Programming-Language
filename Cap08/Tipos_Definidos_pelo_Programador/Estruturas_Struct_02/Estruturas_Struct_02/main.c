#include <stdio.h>
#include <stdlib.h>


/* ler os valores dos campos da estrutura do teclado */

//Declarando a estrutura
struct cadastro
{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
}; //obrigatório ;


int main()
{

    struct cadastro c;

    printf("entre com o nome: ");
    //Lê do teclado uma string e armazena no campo nome
    setbuf(stdin, NULL); // limpa buffer teclado. NULL Constante padrão valor nulo
    //gets(c.nome);
    fgets(c.nome, 50, stdin); //stdin entrada padrao ou seja o teclado
    //scanf(" %50[^\n]",c.nome); // evita erro saida gets

    printf("entre com a idade: ");
    //Lê do teclado um valor inteiro e armazena no campo idade
    scanf("%d", &c.idade);


    printf("entre com a rua: ");
    //Lê do teclado uma string e armazena no campo rua

    setbuf(stdin, NULL); // limpa buffer teclado. NULL Constante padrão valor nulo
    //gets(c.rua);
    fgets(c.rua, 50, stdin); //stdin entrada padrao ou seja o teclado
    //scanf(" %50[^\n]",c.rua);

    printf("entre com o numero: ");
    //Lê do teclado um valor inteiro e armazena no campo numero
    scanf("%d",&c.numero);



    printf("\n=================================================\n");

    //imprimindo

    printf("%s\n", c.nome);
    printf("%d\n", c.idade);
    printf("%s\n", c.rua); // %s string de uma struct
    printf("%d\n", c.numero);


    system("pause");
    return 0;
}
