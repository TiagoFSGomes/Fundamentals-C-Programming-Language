#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float  num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num > 0){
        printf("Quadrado do numero digitado: %.3f\n\n", pow(num,2));
        printf("Raiz quadrada do numero digitado: %.3f\n\n", sqrt(num));
    }
    else
        printf("O numero digitado nao e positivo\n\n");
    system("pause");
    return 0;
}
