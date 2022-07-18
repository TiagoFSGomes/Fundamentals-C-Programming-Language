#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 65;
    char ch;
    float f = 25.1;

    // ch recebe 8 bits menos significativos de x
    // converte para a tabela ASCII

    ch = x; //C permite atribuição entre tipos básicos. Pode haver perda de informação
    printf("ch = %c\n",ch);

    // x recebe apenas a parte inteira de f

    x = f;
    printf("x = %d\n",x);

    //f recebe o valor de 8 bits convertido para real

    f = ch;
    printf("f = %f\n",f);


    //f recebe o valor de x

    f = x;
    printf("f = %f\n",f);

    system("pause");
    return 0;
}
