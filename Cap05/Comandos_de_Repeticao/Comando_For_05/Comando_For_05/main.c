#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for(c=a; c<=b ; ){ // cl�usula de incremento omitida. condi��o de parada existe mas n�o � atingida.

        printf("%d\n\n", c);
        c++; // evitar loop infinito
    }

    system("pause");
    return 0;
}
