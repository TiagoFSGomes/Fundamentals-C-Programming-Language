#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for(c=a; c<=b ; ){ // cláusula de incremento omitida. condição de parada existe mas não é atingida.

        printf("%d\n\n", c);
        c++; // evitar loop infinito
    }

    system("pause");
    return 0;
}
