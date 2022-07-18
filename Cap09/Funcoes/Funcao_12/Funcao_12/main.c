#include <stdio.h>
#include <stdlib.h>

/*

Na linguagem C N�O suporta a atribui��o de um array para outro. Por
esse motivo, n�o se pode ter um array como retorno de uma fun��o.

� poss�vel retornar um array indiretamente, desde que ele fa�a parte de uma estrutura.

Resumo: A linguagem C n�o suporta a atribui��o de um array para outro, mas permite a
atribui��o entre estruturas. Isto faz com que os conte�dos das vari�veis contidas dentro
de uma estrutura sejam copiados para outra. Desse modo, � poss�vel retornar um array
desde que ele esteja dentro de uma estrutura.


*/

//Estrutura

struct vetor{

    int v[5];
};

struct vetor retorna_array(){

    struct vetor v = {1,2,3,4,5};
    return v;
};

int main()
{
    int i;

    struct vetor vet = retorna_array();

    for(i=0; i<5; i++){

        printf("Valores: %d \n", vet.v[i]);

    }


    system("pause");
    return 0;
}
