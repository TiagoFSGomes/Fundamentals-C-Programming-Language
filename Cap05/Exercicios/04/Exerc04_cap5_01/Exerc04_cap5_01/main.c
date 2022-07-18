#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    // condição: i <= numero digitado / 2 (avalia-se s a partir de 2 até a metade dele próprio)
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) { // executa o if caso a divisão do numero pelo incremento for igual a zero.
        resultado++;
        break;
        }
    }

    if (resultado == 0)
        printf("%d e um numero primo\n", num);
    else
        printf("%d nao e um numero primo\n", num);


    system("pause");
    return 0;
}
