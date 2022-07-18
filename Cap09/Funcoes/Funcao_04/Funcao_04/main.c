#include <stdio.h>
#include <stdlib.h>

// Cálculo do fatorial em uma função própria


/*
 x = 4 entrada do usuário

 na função:

 f = 1*1 = 1
 f = 1*2 = 2
 f = 2*3 = 6
 f = 6*4 = 24

 logo fatorial de 4! = 4*3*2*1 = 24
*/

int fatorial (int n){

    int i, f=1;

    for(i=1; i<=n; i++){
        f = f*i;
    }

    return f;

}

int main()
{
    int x;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&x);


    int fat = fatorial(x);
    printf("O fatorial do numero %d e: %d\n\n", x,fat);

   system("pause");
    return 0;
}
