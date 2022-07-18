#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for(c=a; c<=b ;c+=2){ // c = c + 2 cláusula de incremento pode conter qualquer comando

        printf("%d\n\n", c);
    }

    //Novo valor sera lido do teclado

    for(c=a; c<=b ;scanf("%d",&c)){ // cláusula de incremento pode conter qualquer comando

        printf("%d\n\n", c);
    }

    system("pause");
    return 0;
}
