#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);

    while(a<=b){
        a += 1;
        if(a == 5)
            break; // No momento em que a for igual a b, o comando break é executado e o laço é interrompido
        printf("%d\n\n", a);
    }


    system("pause");
    return 0;
}
