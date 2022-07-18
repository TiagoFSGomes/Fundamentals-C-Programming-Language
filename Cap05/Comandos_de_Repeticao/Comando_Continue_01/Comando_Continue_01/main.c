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
            continue; // No momento em que a for igual a b, o comando continue é executado e nessa iteração do laço é ignorada
        printf("%d\n\n", a);
    }


    system("pause");
    return 0;
}
