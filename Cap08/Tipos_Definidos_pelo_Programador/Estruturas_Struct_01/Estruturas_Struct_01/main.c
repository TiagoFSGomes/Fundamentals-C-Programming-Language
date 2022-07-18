#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Uma estrutura pode ser vista como um conjunto de vari�veis sob o mesmo nome,
e cada uma delas pode ter qualquer tipo (ou o mesmo tipo).


Sintaxe:

            struct nome_struct{
                tipo1 campo1;
                tipo2 campo2;
                ...
                tipon campoN;
            };

    Vantagem: organizada v�rios tipos de dados diferentes dentro de uma �nica vari�vel.

Exemplo:  estrutura declarada para representar o cadastro de uma pessoa.

    struct cadastro{
        char nome[50];
        int idade;
        char rua[50];
        int numero;
    }; Obrigat�rio usar o ;

    Aten��o: estruturas diferentes podem ter membros com nomes iguais. Contudo,
    os nomes dos membros de uma estrutura devem ser diferentes um do outro.
*/

//Definindo a estrutura
struct cadastro
{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};


int main()
{
    //Declarando a estrutura de modo similiar aos tipos existentes
    struct cadastro c;

    // OBSERVA��O:operador de acesso aos campos da estrutura � o ponto (.)

    /*Como os campos nome e rua s�o strings, foi preciso
      usar a fun��o strcpy() para copiar o valor para esses campos*/

    strcpy(c.nome, "Tiago");
    //Atribui a string �Tiago� para o campo nome

    //Atribui a string �Avenida Brasil� para o campo rua
    strcpy(c.rua,"Avenida Brasil");

    //Atribui o valor 1082 para o campo numero
    c.numero = 1082;


    //imprimindo

    printf("%s\n", c.nome);
    printf("%s\n", c.rua); // %s string de uma struct
    printf("%d\n", c.numero);

    system("pause");
    return 0;
}
