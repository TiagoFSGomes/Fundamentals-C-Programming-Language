#include <stdio.h>
#include <stdlib.h>

/*
        Temos o comando gets()

        Sintaxe:

                char str[20]
                gets(str);


         Armazena tudo que for digitado até o comando de enter
*/

 /*
        Temos o comando fgets()

        Ler uma  string do teclado. Armazena tudo que foi digitado incluindo o comando de enter que e um (\n)


        Sintaxe:

                fgets (string_a_ser_lida, tamanho, stdin_dispositivo_entrada_padrao);
    */


  /*
        Temos o comando fputs()

        Ler uma  string do teclado.


        Sintaxe:

                fputs(string_a_ser_lida, tamanho, stdout_dispositivo_entrada_padrao);
    */

int main()
{
    char nome[30];

    printf("Digite um nome: ");


    //gets(nome);

    fgets (nome, 30, stdin);

    //fputs(nome, stdout);

    printf("O nome digitado foi: %s", nome); // %s formato de dados sequencia de caracteres "string"



    system("pause");
    return 0;
}
