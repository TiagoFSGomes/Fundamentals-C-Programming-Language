#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for(c=a; ; c++){ // cl�usula de condi��o omitida. Loop infinito sem condi��o de parada

        printf("%d\n\n", c);

    }

    system("pause");
    return 0;
}
