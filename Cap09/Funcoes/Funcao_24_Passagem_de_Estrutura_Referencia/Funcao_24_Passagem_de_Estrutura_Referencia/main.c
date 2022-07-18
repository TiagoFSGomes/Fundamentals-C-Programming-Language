#include <stdio.h>
#include <stdlib.h>

/* Estrutura passada por referência
Note, nesse exemplo, que a função atribui recebe uma struct ponto por referência,
“*p”. Para acessar qualquer um dos seus campos (x ou y), é necessário utilizar o operador
“*” na frente do nome da variável que representa a estrutura, “*p”, e em seguida
colocar o operador “*” e o nome da variável entre parênteses, “(*p)”. Somente depois
de feito isso é que podemos acessar um dos campos da estrutura com o operador ponto
“.”



*/
struct ponto
{
    int x, y;
};
void atribui(struct ponto *p)
{
    // (*p).x = 10; //indica que a variável p é na verdade o ponteiro, ou melhor, a variável que foi passada por referência
    // (*p).y = 20;

    /*e ambas indicam que a variável x é na verdade o ponteiro, e não p. Isso ocorre porque o
operador ponto “.” tem prioridade e é executado primeiro. Logo, o operador asterisco
“*”atuará sobre o campo da estrutura, e não sobre a variável da estrutura.

*/

/*
O operador seta (->) é utilizado quando uma referência para uma estrutura (struct)
é passada para uma função. Ele permite acessar o valor do campo da estrutura fora da
função sem utilizar o operador “*”.
*/
    p->x = 10;
    p->y = 20;
}
int main()
{
    struct ponto p1; //variável p1

    //chama função
    atribui(&p1); //passa por refrencia logo &

    printf("x = %d\n",p1.x);
    printf("y = %d\n",p1.y);

    system("pause");
    return 0;
}
