#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    // condi��o: i <= numero digitado / 2 (avalia-se s a partir de 2 at� a metade dele pr�prio)
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) { // executa o if caso a divis�o do numero pelo incremento for igual a zero.
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
