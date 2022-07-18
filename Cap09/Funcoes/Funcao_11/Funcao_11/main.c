#include <stdio.h>
#include <stdlib.h>
#include <math.h> // para realizar o log do valor
/*

O comando RETURN pode ser usado sem um valor associado a ele para terminar uma
função do tipo void.


*/
void imprime_log(float x)
{
    if(x <= 0)
        return;//termina a função se if for true

    printf("Log = %f\n",log10(x)); // realiza o cálculo log base 10 caso a condição anterior seja falsa
}
int main()
{
    float x;

    printf("Digite x: ");
    scanf("%f", &x);

    imprime_log(x); // chama função imprime_log()

    system("pause");
    return 0;
}


/*

Na função contida no exemplo anterior, se o valor de x é negativo ou zero,
o comando return faz com que a função termine antes que o comando printf() seja executado,
mas nenhum valor é retornado.


*/
