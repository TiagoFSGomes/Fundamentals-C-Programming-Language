#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, n, soma=0;

    for(cont=0; cont<10; cont++){

        printf("Digite uma numero inteiro: ");
        scanf("%d", &n);
        soma = soma + n;
        printf("Valor da soma: %d\n", soma);
    }
    //printf("%d\n", soma);

    system("pause");
    return 0;
}
