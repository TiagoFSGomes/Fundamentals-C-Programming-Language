#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\tiago\Documents\C_Projects\Linguagem_C_Completa_Descomplicada\Libraries\aritmetica\aritmetica.h" //inclui nossa biblioteca

int main()
{
    int x,y,z;
    char ch;

    printf("Digite uma operacao matematica (+,-,*,/): ");
    ch=getchar();

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    switch(ch){
        case '+': z = soma(x,y); break;
        case '-': z = subtracao(x,y); break;
        case '*': z = produto(x,y); break;
        case '/': z = divisao(x,y); break;
    default: z = soma(x,y);
    }

    printf("Resultado = %d\n",z);

    system("pause");
    return 0;
}
