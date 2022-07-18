#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    if(prestacao > (salario * 0.20)) // se a prestação execeder 20% do salário empréstimo não concebido
        printf("Empréstimo não concebido\n\n");

    else
        printf("Empréstimo concebido\n\n");

    system("pause");
    return 0;
}
