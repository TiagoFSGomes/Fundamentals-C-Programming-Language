#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, i;
    printf("digite um numero inteiro: ");
    scanf("%d",&num1);


     for(i = 1; i <= num1; i += 2){ //imprime somente os números ímpares até o número digitado pelo usuário
                                    // como num é ímpar, soma-se 2 para ir para o próximo ímpar
        printf("%d\n\n", i);
    }

    system("pause");
    return 0;
}
