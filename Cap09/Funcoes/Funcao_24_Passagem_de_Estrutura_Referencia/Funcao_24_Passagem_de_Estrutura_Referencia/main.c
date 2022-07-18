#include <stdio.h>
#include <stdlib.h>

/* Estrutura passada por refer�ncia
Note, nesse exemplo, que a fun��o atribui recebe uma struct ponto por refer�ncia,
�*p�. Para acessar qualquer um dos seus campos (x ou y), � necess�rio utilizar o operador
�*� na frente do nome da vari�vel que representa a estrutura, �*p�, e em seguida
colocar o operador �*� e o nome da vari�vel entre par�nteses, �(*p)�. Somente depois
de feito isso � que podemos acessar um dos campos da estrutura com o operador ponto
�.�



*/
struct ponto
{
    int x, y;
};
void atribui(struct ponto *p)
{
    // (*p).x = 10; //indica que a vari�vel p � na verdade o ponteiro, ou melhor, a vari�vel que foi passada por refer�ncia
    // (*p).y = 20;

    /*e ambas indicam que a vari�vel x � na verdade o ponteiro, e n�o p. Isso ocorre porque o
operador ponto �.� tem prioridade e � executado primeiro. Logo, o operador asterisco
�*�atuar� sobre o campo da estrutura, e n�o sobre a vari�vel da estrutura.

*/

/*
O operador seta (->) � utilizado quando uma refer�ncia para uma estrutura (struct)
� passada para uma fun��o. Ele permite acessar o valor do campo da estrutura fora da
fun��o sem utilizar o operador �*�.
*/
    p->x = 10;
    p->y = 20;
}
int main()
{
    struct ponto p1; //vari�vel p1

    //chama fun��o
    atribui(&p1); //passa por refrencia logo &

    printf("x = %d\n",p1.x);
    printf("y = %d\n",p1.y);

    system("pause");
    return 0;
}
