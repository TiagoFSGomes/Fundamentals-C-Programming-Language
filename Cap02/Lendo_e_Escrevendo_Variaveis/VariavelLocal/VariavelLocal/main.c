#include <stdio.h>
#include <stdlib.h>

/* A vari�vel x declarada tr�s vezes dentro de um operador { } - Escopo Local
   Possuem tr�s escopos e tempos de vida diferentes
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
