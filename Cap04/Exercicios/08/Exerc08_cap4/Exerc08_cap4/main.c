#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7 ){
        printf("Categoria do nadador: INFANTIL A\n\n");
    }

    if(idade >= 8 && idade <= 10){
        printf("Categoria do nadador: INFANTIL B\n\n");
    }

    if(idade >= 11 && idade <= 13){
        printf("Categoria do nadador: JUVENIL A\n\n");
    }

    if(idade >= 14 && idade <= 17){
        printf("Categoria do nadador: JUVENIL B\n\n");
    }

    if(idade >= 18){
        printf("Categoria do nadador: SENIOR/MASTER\n\n");
    }
    else
        printf("Idade invalida\n\n");

    system("pause");
    return 0;
}
