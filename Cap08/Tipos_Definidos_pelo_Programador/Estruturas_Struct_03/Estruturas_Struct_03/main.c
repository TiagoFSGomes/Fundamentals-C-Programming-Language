#include <stdio.h>
#include <stdlib.h>


/* Array de estruturas


Voltemos ao problema do cadastro de pessoas.
Vimos que o uso de estruturas facilita muito a vida do programador na manipulação dos dados do programa.
Imagine ter de declarar quatro cadastros para quatro pessoas diferentes:

                char nome1[50], nome2[50], nome3[50], nome4[50];
                int idade1, idade2, idade3, idade4;
                char rua1[50], rua2[50], rua3[50], rua4[50];
                int numero1, numero2, numero3, numero4;


Utilizando uma estrutura, o mesmo pode ser feito da seguinte maneira:

                struct cadastro c1, c2, c3, c4;

A representação desses quatro cadastros pode
ser ainda mais simplificada se utilizarmos o conceito de arrays:

                struct cadastro c[4];




Desse modo, cria-se um array de estruturas, em que cada posição do array é uma
estrutura do tipo cadastro.


*/

//Declarando a estrutura
struct cadastro
{
    char nome[50], rua[50];
    int idade, numero;
}; //obrigatório ;

int main()
{
    struct cadastro c[4]; //cada posição do array é uma estrutra do tipo cadastro
    int i;

    for(i=0; i<4; i++){

        printf("entre com o nome-> ");
        gets(c[i].nome);

        printf("entre com a rua-> ");
        gets(c[i].rua);

        printf("entre com a idade-> ");
        scanf("%d",&c[i].idade);

        printf("entre com o numero-> ");
        scanf("%d",&c[i].numero);

        fgetc(stdin); //ler a quebra de linha da leitura anterior


    }


    system("pause");
    return 0;
}
