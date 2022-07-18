#include <stdio.h>
#include <stdlib.h>
/*Retorno da Função ; Funções COM retorno

    Se a função não for do tipo void, ela deverá retornar um valor. O comando return
 é utilizado para retornar esse valor para o programa:


                    return expressão;




   Atenção:  cláusula return tem de ser compatível com o tipo de retorno declarado
para a função.


 ATENÇÃO: Uma função pode ter mais de uma declaração return

          No maioria dos casos, pode-se reescrever uma função
        para que ela use somente um comando return. MELHORA LEITURA CÓDIGO EM GRANDES FUNÇÕES

*/

// função com apenas um return
int maior(int x, int y){
    int z;
    if(x>y){
        z = x;
    }else
        z = y;

    return z;
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
