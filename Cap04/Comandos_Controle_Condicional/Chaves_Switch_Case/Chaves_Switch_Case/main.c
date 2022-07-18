#include <stdio.h>
#include <stdlib.h>

/*
    Se o primeiro comando dentro de da case for a declaração de uma variável,
    será necessário colocar todos os comandos desse case dentro de um par de chaves {}

    Um salto condicional não pode pular uma declaração de variável no mesmo escopo por isso a
    necessidade de uso das {}
*/

int main()
{
    char ch;

    int a, b;

    printf("Digite uma operacao matematica: ");
    ch = getchar();

    printf("Digite dois numeros inteiros:  ");
    scanf("%d%d", &a, &b);

    switch(ch){
        case '+':{
            int c = a + b;
            printf("Soma: %d\n", c);
        }
            break;

        case '-':{
            int d = a - b;
            printf("Subtracao: %d\n", d);
        }
            break;

        case '*':{
            int e = a * b;
            printf("Produto: %d\n", e);
        }
            break;


        case '/':{
            int f = a / b;
            printf("Divisao: %d\n", f);
        }
            break;

        default:
            printf("Nao e operacao.\n\n\n");

    }// Fim do switch

    system("pause");
    return 0;
}
