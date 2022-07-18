#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, i;
    printf("digite um numero inteiro positivo: ");
    scanf("%d",&num1);

    for(i=num1; i>=0; i--){ //imprime em ordem decrescente
        printf("%d\n\n",i);
    }
    system("pause");
    return 0;
}
