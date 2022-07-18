#include <stdio.h>
#include <stdlib.h>

/* A variável x declarada três vezes dentro de um operador { } - Escopo Local
   Possuem três escopos e tempos de vida diferentes
   Uma existe enquanto a outra existe
*/
void func1(){

    int x; //Variavel Local
}
void func2(){

    int x; //Variavel Local
}

int main()
{
    int x;
    scanf("%d",&x);
    if(x==5){
        int y=1; //Escopo local dentro  de outro escopo local
        printf("%d\n",y);
    }

    system("pause");
    return 0;
}
