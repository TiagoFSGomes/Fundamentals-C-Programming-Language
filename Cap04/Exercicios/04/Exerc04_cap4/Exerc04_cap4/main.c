#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao;

    printf("Digite o valor do sal�rio: ");
    scanf("%f", &salario);

    printf("Digite o valor da presta��o: ");
    scanf("%f", &prestacao);

    if(prestacao > (salario * 0.20)) // se a presta��o execeder 20% do sal�rio empr�stimo n�o concebido
        printf("Empr�stimo n�o concebido\n\n");

    else
        printf("Empr�stimo concebido\n\n");

    system("pause");
    return 0;
}
