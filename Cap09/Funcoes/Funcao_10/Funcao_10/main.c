#include <stdio.h>
#include <stdlib.h>
/*Retorno da Função ; Funções COM retorno

O comando return é utilizado para retornar um valor para o programa.

No entanto, esse comando também é usado para TERMINAR A EXECUÇÃO DA FUNÇÃO, similar ao
comando break em um laço ou switch.
*/

// Função vai terminar quando um dos comandos return for executado.

int maior(int x, int y){
    if(x>y){
        return x;
    }else
        return y;

    printf("Fim da função\n"); //Jamais será executado, pois existe um comando return anteriormente
}

int main()
{

    int a,b;


    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    printf("maior numero e = %d\n",maior(a,b)); //chamada da função foi feita dentro da função printf().

    system("pause");
    return 0;
}
