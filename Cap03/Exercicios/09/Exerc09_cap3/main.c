#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deg, rad;

    scanf("%f", &deg);
    rad = deg * (3.141592 / 180.0); // Conversão de graus para radianos
    printf("O angulo em radianos e: %.3f\n", rad);
    system("pause");
    return 0;
}
