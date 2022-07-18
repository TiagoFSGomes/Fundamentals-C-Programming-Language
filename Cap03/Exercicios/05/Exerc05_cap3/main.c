#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Acentuação da língua portuguesa


int main(){

     setlocale(LC_ALL, "Portuguese"); //Acentuação da língua portuguesa

     int ano_atual, idade, ano_nasc;

     printf("Digite o ano atual em 4 digitos - Ex. 1998: ");
     scanf("%d", &ano_atual);

     printf("Insira sua idade: ");
     scanf("%d", &idade);

     ano_nasc = ano_atual - idade;

    printf("A data de nascimento é: %d\n\n", ano_nasc);

    system("pause");
    return 0;
}
