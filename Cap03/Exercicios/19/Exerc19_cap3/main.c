#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    //Opera��o ou Exclusivo Bit a Bit - Operador ^

    printf("Ou Exclusivo Bit a Bit entre os numeros %d e %d e: %d\n", num1, num2, num1 ^ num2);

    printf("\n##############################################################\n");

    //Opera��o E Bit a Bit - Operador &

    printf("\nE Bit a Bit entre os numeros %d e %d e: %d\n\n\n", num1, num2, num1 & num2);

    system("pause");
    return 0;
}
